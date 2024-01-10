#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void missingNumber(int arr[], int n){
    for (int i = 0; i<n; ++i){
        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
    
    for (int i=0; i<n; ++i){
        if (arr[i+1] - arr[i] != 1){
            cout<< "Missing element is:"<<arr[i]+1;
            return;
        }
    }

}

int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin >> arr[i];
    }
    
    missingNumber(arr, n);
    

    return 0;
}
