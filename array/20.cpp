#include <iostream>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int count = 0;
    int max_length = 0;
    string substr = "";
    substr += s[0];   
    
    string::size_type idx = 1;
    auto left_item = s.cbegin();
    auto right_item = ++s.cbegin();
    if(right_item == s.cend()){
        return 1;
    }
    while(left_item != s.cend()){
        while((idx = substr.find(*right_item)) == string::npos){
            substr += *right_item;
            ++right_item;
            if(right_item == s.cend()){
                break;
            }
        }
        
        // save the max_length
        if(substr.size() > max_length){
            max_length = substr.size();
        }
        if(right_item == s.cend()){
                break;
            }
        
        ++left_item;
        
        if(!substr.empty()){
            substr.erase(0,1); 
        }                 
        
    }
    return max_length;
}


int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
