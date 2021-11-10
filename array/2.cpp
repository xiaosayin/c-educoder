#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int light_array[n];
    //light array every element is 0;
    for(int i=0; i < n; ++i){
        light_array[i] = 0;
    }
    // turn and off
    for(int i=0; i<k; ++i){
        for(int j=0; j<n; ++j){
            if((j+1)%(i+1) == 0){
                light_array[j] = light_array[j] + 1;
            }
        }
    }
    // cout index of on light
    for(int i=0; i<n; ++i){
        if(light_array[i]%2!=0){
            cout << i+1 << " ";
        }
    }
    return 0;
}
