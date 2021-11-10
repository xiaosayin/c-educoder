#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    bool flag = false;
    for(int i = 0; i < s1.size() - s2.size(); ++i){
        if(s1.substr(i,s2.size()) == s2){
            cout << i << endl;
            flag = true;
            break;
        }
    }

    if(!flag){
        cout << -1 << endl;
    }
    
    // if(s1.find(s2) != s1.npos)
    //     cout << s1.find(s2) << endl;
    // else
    //     cout << -1 << endl;
    return 0;
}
