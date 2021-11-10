#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,all_s="";
    while(cin >> s){
        all_s += s;
    }
    for(auto &p : all_s){
        p = tolower(p);
    }
    
    int num = 0;
    for(const auto p : all_s){
        if(p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u'){
            ++num;
        }
    }

    cout << num << endl;
    return 0;
}
