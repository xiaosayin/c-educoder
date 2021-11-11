#include <iostream>
#include <string>
using namespace std;

int main()
{
    char oper;
    string s;
    cin >> s;
    cout << s << '=';
    int x1 = 0,x2 = 0;
    int temp = 0, temp1 = 0;
    bool flag = false;
    for(const auto p : s){
        temp1 = p - '0';
        if(temp1 >= 0 && temp1 <= 9){
            if(!flag){
                temp = x1 * 10;
                x1 = temp + temp1;
            }
            else{
                temp = x2 * 10;
                x2 = temp + temp1;
            }
        }
        else{
            oper = p;
            flag = true;
        }
    }
    
    switch(oper){
        case '+':{
            cout << x1 + x2 << endl;
            break;
        }
        case '-':{
            cout << x1 - x2 << endl;
            break;
        }
        case '*':{
            cout << x1 * x2 << endl;
            break;
        }
        case '/':{
            cout << x1 / x2 << endl;
            break;
        }

    }
    return 0;
}
