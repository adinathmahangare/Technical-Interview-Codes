#include <iostream>
using namespace std;

int Max(int arr[], int n){
    int max = 0;
    for (int i = 0 ; i<n; ++i){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cout<<"enter the number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    
    cout << "Maximum element is:"<<Max(arr, n);

    return 0;
}