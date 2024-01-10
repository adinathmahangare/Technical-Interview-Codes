#include <iostream>
using namespace std;

int Power(int a, int b){
    int number = 1;
    int i = 0;
    while(i<b){
        number *= a;
        i++;
    }
    return number;
}

int main()
{
    int a,b;
    cout<<"Enter number:";
    cin>>a;
    cout<<"Enter power:";
    cin>>b;
    cout<<"Final number:"<<Power(a,b);

    return 0;
}