#include <iostream>
using namespace std;

int HCF(int a, int b){
    int hcf = 0;
    for (int i = 1; i<=a && i<=b; ++i){
        if (a%i == 0 && b%i == 0){
            hcf = i;
        }
    }
    return hcf;
}

int LCM(int a, int b){
    int lcm = 0;
    
    lcm = a*b/ (HCF(a,b));
    
    return lcm;
}

int main()
{
    int a, b;
    cout<<"Enter numbers:";
    cin>>a>>b;
    cout<<"LCM of the numbers is:"<<LCM(a,b);
    return 0;
}