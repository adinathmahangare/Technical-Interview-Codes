#include <iostream>
using namespace std;

void Prime(int n){
    for (int i = 2; i<=n; ++i){
        bool temp = true;
        for (int j = 2; j <= i/2; ++j){
            if (i%j == 0){
                temp = false;
                break;
            }
        }
        if (temp == true){
                cout<<i << " ";
        }
    }
}

bool isPrime(int n){
    bool temp = true;
    for (int j = 2; j <= n/2; ++j){
        if (n%j == 0){
            temp = false;
            break;
        }
    }
    return temp;
}

int main()
{
    int n;
    cout<<"Enter any number:";
    cin>>n;
    if (isPrime(n) == true){
        cout<<"Given number is a prime number";
    }
    else{
        cout<<"Given number is not a prime number";
    }
    cout<< "\nPrime numbers until the given number:";
    Prime(n);

    return 0;
}