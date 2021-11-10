#include <iostream>
using namespace std;

int main(void) {
    /** Begin **/
    int B;
    cin >> B;
    for (int i=1;i<=200;i++) {
        // first element record the length of Bth number
        int arr[25] = {0}, arr2[25] = {0}, is_palin = 1;
        // convert i^2 to B; save every bit to arr

        for (int _i=i*i;_i;_i/=B) arr[++arr[0]] = _i%B;
        // check palin
        for (int i=1, j=arr[0]; i<j; i++, j--)
            if (arr[i] != arr[j]) is_palin = 0;
        // cout original number and its square
        if (is_palin) {
            for (int _i=i;_i;_i/=B) arr2[++arr2[0]] = _i%B;
            for (int j=arr2[0];j>=1;j--) {
                char tmp = arr2[j]<10?arr2[j]+'0':arr2[j]-10+'A';
                cout << tmp;
            }
            cout << " ";
            for (int j=arr[0];j>=1;j--) {
                char tmp = arr[j]<10?arr[j]+'0':arr[j]-10+'A';
                cout << tmp;
            }
            cout << "\n";
        }
    }
    /**  End  **/
    return 0;
}
