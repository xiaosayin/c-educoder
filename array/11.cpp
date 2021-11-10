#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[100], t;
    cin.getline(s, 81); 
    cin.get(t);

    bool f=0;
    for (int i=strlen(s)-1;i>=0;i--) if (s[i]==t) {
        cout << i << endl;
        f=1; break;
    }
    if (!f) cout << "Not Found" << endl;
    return 0;
}
