#include <iostream>
using namespace std;

void TimeFormat(int hour, int minute, int second){
    if (hour<13){
        cout<<"Time : "<<hour<<":"<<minute<<":"<<second;
    }
    else{
        hour = hour -12;
        cout<<"Time : "<<hour<<":"<<minute<<":"<<second;
    }
}

int main()
{
    int hour, minute, second;
    cout<<"Enter time in 24hr format:";
    cin>>hour>>minute>>second;
    
    TimeFormat(hour, minute, second);

    return 0;
}