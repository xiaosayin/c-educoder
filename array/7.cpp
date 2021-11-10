#include <iostream>
using namespace std;

int f[11][11];

int main(void) {
    /** Begin **/
    int r;
    cin >> r;
    int mx = 0;
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=i;j++) {
            cin >> f[i][j];
            //compute every load's sum
            if (f[i-1][j]>f[i-1][j-1])
                f[i][j] += f[i-1][j];
            else
                f[i][j] += f[i-1][j-1];
            // record the max sum
            if (f[i][j] > mx) mx = f[i][j];
        }
    }
    cout << mx << endl;
    /**  End  **/
    return 0;
}
