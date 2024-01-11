#include <iostream>
using namespace std;

bool LeapYear(int year){
    if (year%400 == 0){
        return true;
    }
    else if(year%100 == 0){
        return false;
    }
    else if(year%4 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int year;
    cout<<"Enter year:";
    cin>>year;
    
    if (LeapYear(year) == true){
        cout<<"Year is Leap year!";
    }
    else{
        cout<<"Year is not a Leap year!";
    }
    

    return 0;
}