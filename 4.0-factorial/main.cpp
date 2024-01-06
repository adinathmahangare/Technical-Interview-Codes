#include <iostream>
#include <cstdio>
using namespace std;

int Factorial(int n){
    if (n == 0 || n==1){
        return 1;
    }
    else{
        return n*Factorial(n-1);
    }
}

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    int result = Factorial(n);
    //cout<<"Factorial is "<<result;
    printf("Facotrial of %d is %d", n, result);
    
    /*int n = 11;
    int i = 0;
    while(i<n){
        printf("Factorial of %d is %d\n", i, Factorial(i));
        i++;
    }*/

    

    return 0;
}