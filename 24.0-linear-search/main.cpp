#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int &num){
    for (int i=0; i<size; ++i){
        if (arr[i] == num){
            cout<<"Given number is found in array at "<<i<<"th index.";
            return;
        }
    }
    cout<<"Given number not found in array.";
    
}

int main()
{
    int size;
    cout<<"Enter size of an array:";
    cin>>size;
    
    cout<<"Enter elements in an array:";
    int arr[size];
    for(int i = 0; i<size; ++i){
        cin>>arr[i];
    }
    
    int num;
    cout<<"Enter number you want to search:";
    cin>>num;
    
    LinearSearch(arr, size, num);

    return 0;
}