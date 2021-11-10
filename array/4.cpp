#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> number_list;
    int x;
    while(cin >> x){
        if(find(number_list.begin(),number_list.end(),x) == number_list.end()){
            number_list.push_back(x);
        }
    }

    for(const auto &p : number_list){
        cout << p << " ";
    }
    return 0;
}
