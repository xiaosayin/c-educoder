#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,all_s = "";
    while(cin >> s){
        all_s += s;
    }
    int sum = 0;
    int temp;
    // cout << all_s << endl;
    for(auto p : all_s){
        if( (p - '0') >=0 && (p - '0') <= 9){
            // cout << p - '0' << endl;
            temp = sum * 10;
            sum = (temp + (p - '0'));
        }
    }
    cout << sum * 2 << endl;
    return 0;
}
