#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i =0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(int arr[], int size){
    
    for (int i=1; i<size; ++i){
        int key = arr[i];
        int j = i-1;
        
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key; 
        
        printArray(arr, size);
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter size of an array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter array elements:";
    for (int i=0; i<n; ++i){
        cin>>arr[i];
    }
    
    cout<<"Original array:";
    printArray(arr, n);
    cout<<endl;
    
    insertionSort(arr, n);
    cout<<endl;
    cout<<"Sorted array:";
    printArray(arr, n);

    return 0;
}