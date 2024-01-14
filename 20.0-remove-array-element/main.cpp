#include <iostream>
using namespace std;

/*Remove Element: Remove a specific element from an array.*/

int *Remove(int arr[], int n, int rem){
    int newsize = n-1;
    int *newArr = new int[newsize];
    int newIndex =0;
    for (int i=0; i<n; ++i){
        if (arr[i] != rem){
           newArr[newIndex] = arr[i];
           newIndex++;
        }
    }
    
    return newArr;
}

int main()
{
    int n, rem;
    cout<<"Enter number of elements in array:";
    cin>>n;
    
    cout<<"Enter elements of array:";
    int arr[n];
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }
    
    cout<<"Element you want to remove:";
    cin>>rem;
    int *resultArr = Remove(arr, n, rem);
    
    cout<<"Updated array:";
    for (int i=0; i<n-1; ++i){
        cout<<resultArr[i]<<" ";
    }

    return 0;
}