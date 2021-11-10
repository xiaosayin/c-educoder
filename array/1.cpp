#include <iostream>
using namespace std;

void bubble_sort(int arr[], int len) {
        int i, j;
        for (i = 0; i < len - 1; i++)
                for (j = 0; j < len - 1 - i; j++)
                        if (arr[j] < arr[j + 1])
                                swap(arr[j], arr[j + 1]);
}

int main()
{
    int n;
    cin >> n;
    int order_num[n];
    for(int i=0; i < n; ++i){
        cin >> order_num[i];
    }
    bubble_sort(order_num, n);
    for(int i=0; i< n; ++i){
        cout << order_num[i] << " ";
    }
    return 0;
}
