#include <iostream>
#include <string>
using namespace std;

void String_Reverse(string str){
    int start = 0;
    int end = str.length() - 1;
    char temp;
    
    while(start<end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    cout<<"Reversed String is:"<<str;
}

int main()
{
    string str;
    cout<<"Enter your string:";
    //cin>>str; this cin extractor operator stops reading after whitespace
    getline(cin, str);
    String_Reverse(str);

    return 0;
}