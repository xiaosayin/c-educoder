#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    string s;
    int row_number = 0;
    cin >> row_number;
    cin >> s;
    vector<string> row_string(row_number,"");
    
    if(row_number == 1){
        cout << s;
        return 0;
    }
    // which row 
    int each_row = 0;
    for(int i=0; i < s.size(); ++i){
        each_row = i%(2*row_number - 2);
        
        if(each_row < row_string.size()){
            row_string[each_row] += s[i];
        }
        else{
            row_string[2*(row_string.size()-1)-each_row] += s[i];
        }
            
    }
    for(const auto p : row_string){
        cout << p;
    }
    return 0;
}
