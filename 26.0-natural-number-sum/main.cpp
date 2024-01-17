#include <iostream>
using namespace std;

int naturalSum(int n){
    int sum = 0;
    for (int i=0; i<n; ++i){
        sum = sum + i;
    }
    
    return sum;
}

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    int sum = naturalSum(n);
    
    cout<<"Sum is "<<sum;

    return 0;
}