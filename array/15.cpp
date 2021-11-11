#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

// 中心扩展
pair<int, int> expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.size() && tolower(s[left]) == tolower(s[right])) {
        --left;
        ++right;
    }
    return {left + 1, right - 1};
}

string longestPalindrome(string s, int &start, int &end) {
    // int start = 0, end = 0;
    for (int i = 0; i < s.size(); ++i) {
        auto [left1, right1] = expandAroundCenter(s, i, i);
        auto [left2, right2] = expandAroundCenter(s, i, i + 1);
        if (right1 - left1 > end - start) {
            start = left1;
            end = right1;
        }
        if (right2 - left2 > end - start) {
            start = left2;
            end = right2;
        }
    }
    return s.substr(start, end - start + 1);
}


int main()
{
    int start = 0, end = 0;
    string s, all_s = "", palin_s="";
    while(getline(cin,s)){
        all_s += s;
    }

    // cout << all_s;
    size_t index = 0;
    // record other characters' index
    vector<int> index_others{};
    for(const auto p:all_s){
        if((p >= 'A' && p <= 'Z') || (p >= 'a' && p<= 'z')){
            palin_s += p;
        }
        else{
            index_others.push_back(index);
        }
        ++index;
    }
    // cout << palin_s << endl;
    // for(auto p : index_others){
    //     cout << p << endl;
    // }
    string huiwen = longestPalindrome(palin_s,start,end);
    // cout << huiwen << endl;
    // cout << (start == palin_s.find(huiwen)) << endl;
    
    // int diff_index = 0;
    // for(int i=start; i < all_s.size(); ++i){
    //     if()
    // }

    return 0;
}
