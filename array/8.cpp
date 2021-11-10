#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j;
    int m,n;
    bool flag = false;
    cin >> m >> n;
    int matrix[m][n];
    // record the maxium of each row
    int max_row[m] = {0} , min_col[n] = {0};
    // initial min_col
    int answer_max[m][n], answer_min[m][n];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            answer_min[i][j] = -1000000;
            answer_max[i][j] = 1000000;
        }
    }
    // initial matrix and get max_row
    for(i=0; i < m; ++i){
        for(j=0; j < n; ++j){
            cin >> matrix[i][j];
            if(j == 0 || matrix[i][j] > max_row[i]){
                max_row[i] = matrix[i][j];
            }
        }
    }
    
    // get min col
    for (j = 0; j < n; ++j) {
        for (i = 0; i < m; ++i) {
            if (i == 0 || min_col[j] > matrix[i][j]) {
                min_col[j] = matrix[i][j];
            }
        }
    }

    
    
    // get coordinate
    for(i = 0; i< m; ++i){
        for(j = 0; j < n; ++j){
            if(max_row[i] == matrix[i][j]){
                answer_max[i][j] = matrix[i][j];
            }
        }
    }

    for(j=0;j<n;++j){
        for(i=0;i<m;++i){
            if(min_col[j] == matrix[i][j]){
                answer_min[i][j] = matrix[i][j];
            }
        }
    }

    // judge
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            if(answer_max[i][j]==answer_min[i][j]){
                flag = true;
                cout << "mat" << "[" << i << "]" << "[" << j << "]" << "=" << answer_max[i][j] << endl;
            }
        }
    }

    if(!flag){
        cout << "Not Found" << endl;
    }
    
    return 0;
}
