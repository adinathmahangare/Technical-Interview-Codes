#include <iostream>
using namespace std;

//Given an array a[] consisting of only 0s, 1s, and 2s, sort the array in a single traversal.

void sort012(int a[], int size){
    int hi = size-1;
    int mid = 0;
    int lo = 0;
    
    while(hi>=mid){
        switch(a[mid]){
            
            case 0:
            swap(a[lo++], a[mid++]);
            break;
            
            case 1:
            mid++;
            break;
            
            case 2:
            swap(a[mid++], a[hi--]);
            break;
        }
    }
}

void printArray(int arr[], int size){
    for (int i=0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    
    int arr[size];
    cout<<"Enter 0, 1 or 2:";
    for (int i=0; i<size; ++i){
        cin>>arr[i];
    }
    
    cout<<"\nOriginal Array:";
    printArray(arr, size);
    
    sort012(arr, size);
    
    cout<<"\nUpdated Array:";
    printArray(arr, size);


    return 0;
}