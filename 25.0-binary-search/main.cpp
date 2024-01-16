#include <iostream>
using namespace std;

void sort(int arr[], int size){
    int temp;
    for (int i=0; i<size-1; ++i){
        for (int j = size; j>i; --j){
            if (arr[j-1]>arr[j]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int BinarySearch(int arr[], int size, int num){
    sort(arr, size);
    
    int first = 0;
    int last = size - 1;
    
    while(first<last){
        int mid = first + (last - first)/2;
        
        if (arr[mid] == num){
            return mid;
        }
        else if (arr[mid]>num){
            last = mid-1;
        }
        else if (arr[mid]<num){
            first = mid+1;
        }
    }
    
    return -1;
}

int main()
{
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;
    
    int arr[size];
    cout<<"Enter elements in the array:";
    for (int i=0; i<size; ++i){
        cin>>arr[i];
    }
    
    sort(arr, size);
    cout<<"Sorted array:";
    for (int i=0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
    
    int num;
    cout<<"\nEnter number you want to search:";
    cin>>num;
    
    int index = BinarySearch(arr, size, num);
    
    if(index == -1){
        cout<<"Given number not found in array.";
    }
    else{
        cout<<"Given number is found at "<<index<<"th index.";
    }
    return 0;
}