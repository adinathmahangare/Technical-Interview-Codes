#include <iostream>
using namespace std;

bool PerfectSquare(int num){
    
    /*for (int i=0; i<=num/2; ++i){         Time complexity is O(n)
        if (i*i == num){
            return true;
        }
    }
    return false;*/
    
    if (num<0){
        return false;
    }
    
    long long left = 0;                     /*Time complexity is O(logn)*/
    long long right = num/2;
    
    while (left<=right){
        long long mid = left + (right - left) / 2;
        long long square = mid*mid;
        
        if (square == num){
            return true;
        }
        else if (square<num){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return false;
}

int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    
    if (PerfectSquare(num) == true){
        cout<<"Number is perfect square!";
    }
    else{
        cout<<"Number is not a perfect square!";
    }

    return 0;
}