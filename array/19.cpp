#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string output = "";
    for(int i=0; i < s.size(); ++i){
        if(i%2){
            output += s[i];
        }
    }
    cout << output << endl;

    return 0;
}
