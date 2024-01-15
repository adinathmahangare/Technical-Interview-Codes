#include <iostream>
using namespace std;

/* bubble sort */

void swap(int &a, int &b){          //passing values to parameters by reference 
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int n){
    for (int i = 0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i<n; ++i){
        for (int j = n - 1; j>i; --j){
            if (arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter number of elements in an array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements in an array:";
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    
    cout<<"Given array is:";
    printArray(arr, n);
    
    bubbleSort(arr, n);
    cout<<"\nSorted array:";
    printArray(arr, n);
    
    return 0;
}