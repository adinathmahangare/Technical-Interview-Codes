#include <iostream>
using namespace std;

int LenCount(int number){
    int count = 0;
    while(number != 0){
        number = number/10;
        count++;
    }
    return count;
}

bool Armstrong(int number){
    
    int original = number;          /*since we are going to modify the number in next steps*/
    
    int count = LenCount(number);
    int arr[count];
    for (int i = 0; i<count; ++i){
        arr[i] = number%10;
        number = number/10;
    }
    
    int sum = 0;
    for (int i = 0; i<count; ++i){
        int p = 1;
        for (int j = 1; j<=count; ++j){
            p *= arr[i];
        }
        sum = sum + p;
    }
    
    if (sum == original){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    
    if (Armstrong(num) == true){
        cout<< "Given number is an Armstrong number";
    }
    else{
        cout<<"Given number is not an armstrong number";
    }

    return 0;
}