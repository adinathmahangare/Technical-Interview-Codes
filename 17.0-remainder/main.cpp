#include <iostream>
using namespace std;

int Remainder(int Dividend, int Divisor){
    int Remainder;
    int Quotient;
    
    Quotient = Dividend/Divisor;
    Remainder = Dividend - Divisor*Quotient;
    
    return Remainder;
}

int main()
{
    int a, b;
    cout<<"Enter Divident:";
    cin>>a;
    cout<<"Enter Divisor:";
    cin>>b;
    
    cout<<"Remainder of division is "<<Remainder(a,b);

    return 0;
}