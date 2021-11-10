#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort(string &str) {
    size_t i, j;
    for (i = 0; i < str.size() - 1; i++){
        for (j = 0; j < str.size() - 1 - i; j++){
            if (str[j] < str[j + 1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

int main()
{
    string s;
    cin >> s;
    string ms("");

    for(const auto p : s){
        if(ms.find(p) == ms.npos){
            ms += p;
        }
    }
    bubble_sort(ms);
    cout << ms << endl;
    return 0;
}
