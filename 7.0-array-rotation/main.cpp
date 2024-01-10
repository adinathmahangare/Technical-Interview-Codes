#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i<size; ++i){
        cout<< arr[i]<< " ";
    }
    cout << endl;
}

void arrayRotation(int arr[], int size, int d){
    d = d%size;
    int temp[size];
    
    for(int i=0; i<size-d; ++i){
        temp[i] = arr[i+d];
    }
    
    for(int i=0; i<d; ++i){
        temp[size-d+i] = arr[i];
    }
    
    for(int i=0; i<size; ++i){
        cout<< temp[i]<<" ";
    }
}

int main()
{
    int n, d;
    
    cout<<"Enter size of array:";
    cin >> n;
    
    int arr[n];
    
    cout<<"Enter elements of array:";
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    
    cout << "Enter number of rotations:";
    cin >> d;
    
    cout << "\nActual array:";
    printArray(arr, n);
    
    cout << "rotated array:";
    arrayRotation(arr, n, d);
    

    return 0;
}