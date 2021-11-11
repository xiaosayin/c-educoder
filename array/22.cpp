#include <iostream>
using namespace std;
void insertionSort(int arr[],int length){
    for (int i=1; i<length; ++i){
        int value = arr[i];
        int position=i;
        while (position>0 && arr[position-1]>value){
            arr[position] = arr[position-1];
            position--;
        }
        arr[position] = value;
    }//loop i
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    insertionSort(arr,n);
    for(int i=0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}
