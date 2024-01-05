#include <iostream>
using namespace std;

void FizzBizz(int n){
    for (int i = 1; i<=n; ++i){
        if (i%3 == 0 && i%5 == 0){
            cout<<"FizzBizz"<<endl;
        }
        else if (i%3==0){
            cout<<"Fizz"<<endl;
        }
        else if (i%5==0){
            cout<<"Bizz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number till which you want to play FizzBizz:";
    cin>>n;
    FizzBizz(n);

    return 0;
}