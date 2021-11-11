#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    int sum_row[n] = {0};
    int i,j;
    int row_index = 0, max_num = 0, num = 0;
    for(i = 0; i < n; ++i){
        for(j=0; j < n; ++j){
            cin >> mat[i][j];
        }
    }
    for(i = 0; i < n; ++i){
        num = 0;
        for(j=0; j < n; ++j){
            if(mat[i][j]) ++num;
            else break;
        }
        if(num > max_num){
            max_num = num;
            row_index = i;
        }
    }
    cout << row_index;
    return 0;
}

    
