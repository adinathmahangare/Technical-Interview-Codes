#include <iostream>
using namespace std;

void Fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    cout<<"Fibonacci Series: "<<a<<" "<<b<<" ";
    
    for (int i = 0; i<n-2; ++i){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }

}

int main()
{
    int n;
    cout<<"Enter number of elements of fibonacci series you want to print: ";
    cin>>n;
    
    Fibonacci(n);

    return 0;
}