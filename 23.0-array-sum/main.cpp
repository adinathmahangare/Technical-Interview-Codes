#include <iostream>
using namespace std;

int arraySum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i<size; ++i){
        sum = sum + arr[i];
    }
    
    return sum;
}

int main()
{
    int size;
    cout<<"Enter size of an aray:";
    cin>>size;
    
    cout<<"Enter elements in an array:";
    int arr[size];
    for (int i=0; i<size; ++i){
        cin>>arr[i];
    }
    
    int sum = arraySum(arr, size);
    cout<<"Sum of elements in array:"<<sum<<endl;

    return 0;
}