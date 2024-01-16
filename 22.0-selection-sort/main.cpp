#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n){
    for (int i=0; i<n; ++i){
        int minIndex = i;
        for (int j=i+1; j<n; ++j){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        
        if (minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
        
        
        for(int i=0; i<n; ++i){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter number of elements in Array:";
    cin>>n;
    
    cout<<"Enter elements in an Array:";
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    
    cout<<"Original Array:";
    for (int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    selectionSort(arr, n);
    cout<<"\nSorted Array:";
    for (int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}