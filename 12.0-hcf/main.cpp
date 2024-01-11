#include <iostream>
using namespace std;

int HCF(int a, int b){
    int hcf = 0;

    for (int i=1; i<=a && i<=b; ++i){
        if (b%i == 0 && a%i == 0){
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    
    cout<<"HCF of both numbers is:"<<HCF(a,b);

    return 0;
}