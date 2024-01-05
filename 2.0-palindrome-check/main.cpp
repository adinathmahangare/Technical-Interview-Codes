#include <iostream>
#include <string>
using namespace std;

void Palindrome_Check(string str){
    int start = 0;
    int end = str.length() - 1;
    
    while (start<end){
        if (str[start] != str[end]){
            cout<<"Given string is not a Palindrome";
            return;
        }
        else{
            start++;
            end--;
        }
    }
    cout<<"Given string is a Palindrome";
}

int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    Palindrome_Check(str);

    return 0;
}