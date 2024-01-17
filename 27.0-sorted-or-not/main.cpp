#include <iostream>

using namespace std;

void sortedOrNot(int arr[], int size){
    for (int i=0; i<size; ++i){
        if (arr[i]>arr[i+1]){
            cout<<"Array is not sorted.";
            return;
        }
    }
    cout<<"Array is sorted.";
}

int main()
{
    int size;
    cout<<"Enter size of an array:";
    cin>>size;
    
    int arr[size];
    cout<<"Enter elements:";
    for (int i=0; i<size; ++i){
        cin>>arr[i];
    }
    
    sortedOrNot(arr, size);

    return 0;
}