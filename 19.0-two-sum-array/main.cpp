#include <iostream>
using namespace std;

/*Two Sum Problem: Given an array and a target sum, find two numbers that add up to the target sum.*/

void TwoSum(int arr[], int n, int sum){
    for (int i = 0; i<n; ++i){
        for (int j = i+1; j<n; ++j){
            if (arr[i]+arr[j] == sum){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

int main()
{
    int n, sum;
    cout<<"Enter number of elements in an array:";
    cin>>n;
    cout<<"\nEnter sum:";
    cin>>sum;
    int arr[n];
    cout<<"\nEnter elements:";
    for (int i=0; i<n; ++i){
        cin>>arr[i];
    }
    
    cout<<"Two numbers which have sum equal to given number:\n";
    TwoSum(arr, n, sum);
    
    

    return 0;
}