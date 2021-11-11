#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // divided
    int n,x;
    cin >> n;
    int i = 0;
    int list[n];
    
    vector<int> index;
    for(i = 0; i < n; ++i){
        cin >> list[i];
    }

    cin >> x;
    
    int low = 0;
    int high = n-1;
    int mid = (low+high)/2;
    int out_low = 0, out_high = 0;
    while(low < high){
        if(list[mid] == x){
            out_low = mid;
            out_high = mid;
            while(out_high < n){
                if(x != list[++out_high]){
                    --out_high;
                    break;
                }
            }
            while(out_low >= 0){
                if(x != list[--out_low]){
                    ++out_low;
                    break;
                }
            }
            cout << out_low << " " << out_high << endl;
            return 0;
        }
        else if(x < list[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        mid = (low + high) / 2;  
    }

    cout << -1 << " " << -1 << endl;

    return 0;
}
