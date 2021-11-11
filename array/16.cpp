#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    int number_list[n];
    for(int i=0; i < n; ++i){
        cin >> number_list[i];
    }
    cin >> x;
    // x = 7;
    // if(n == 1){
    //     if(x <= number_list[0]){
    //         cout << 0 << endl;
    //     }
    //     else{
    //         cout << 1 << endl;
    //     }
    //     return 0;
    // }

    // divided 2 search
    int output = 0;
    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2; 
    while(low <= high){
        if( x >= number_list[mid] && x <= number_list[mid+1]){
            if(x == number_list[mid]){
                output = mid;
            }
            else{
                output = mid+1;           
            }
            cout << output << endl;
            return 0;
        }
        else if(x < number_list[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        mid = (low + high)/2;
    }
    
    if(mid == 0)
        cout << mid << endl;
    else{
        cout << mid + 1 << endl;
    }
    return 0;
}
