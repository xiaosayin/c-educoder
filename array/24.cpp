#include<iostream>
#include<cstdlib>
#include<climits>
#include<cmath>
using namespace std;

// 表示当前1映射的关系的数字（把全部位置都映射到上面）
int bits = 0;
// 行数和列数
int rows;
int cols;
// 结果：递归过程中不断取最小值
int res = INT_MAX;

// 1+4 五个移动方向（其中0，0就是自身）
int dires[6] = {0, 0, -1, 0, 1, 0};

void dfs(int curr, int steps)
{
    // 达到全零矩阵
    // if (bits == 0)
    if(bits == 0)
    {
        res = min(res, steps);
        return;
    }
    else if (curr == rows * cols)
    {
        return;
    }

    int x = curr / cols;  // 当前行数
    int y = curr % cols;  // 当前列数
    // 不反转, 步数加1
    dfs(curr+1, steps);
    // 翻转去递归，对当前坐标进行一次点灯
    for (int i = 0; i < 5; i ++)
    {
        int nx = x + dires[i];
        int ny = y + dires[i+1];
        if(nx >= 0 && ny >= 0 && nx < rows && ny < cols)
        {
            bits ^= 1 << (nx * cols + ny);
        }
    }
    dfs(curr+1, steps + 1);
    // 回溯,就是把上面翻转的再翻转回去
    for (int i = 0; i < 5; i ++)
    {
        int nx = x + dires[i];
        int ny = y + dires[i+1];
        if(nx >= 0 && ny >= 0 && nx < rows && ny < cols)
        {
            bits ^= 1 << (nx * cols + ny);
        }
    }
}



int main()
{
    rows = 5;
    cols =5;
    int mat[rows][cols];
    for(int i=0; i<rows; ++i){
        for(int j=0; j<cols;++j){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<rows; ++i){
        for(int j=0; j<cols;++j){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<rows; ++i){
        for(int j=0; j<cols;++j){
            if(mat[i][j] == 1){
                mat[i][j] = 0;
            }
            else{
                mat[i][j] = 1;
            }
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    

    
    // 初始化bits，即哪些设置为1的位置
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (mat[i][j] == 1)
            {
                bits |= 1 <<(i*cols+j);
            }
        }
    }

    dfs(0, 0);
    
    // 如果是默认值，表示不可达，则返回-1
    cout << (res == INT_MAX ? -1 : res) << endl;
    return 0;
}
