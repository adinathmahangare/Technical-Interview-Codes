/*Container with more water problem:
You are given an array height where height[i] represents the height of the ith vertical line. 
The array has n non-negative integers, where n is the number of vertical lines. 
Each vertical line has a width of 1.
Write a function maxArea to find the maximum area that can be formed between any two vertical lines.*/

#include <iostream>
#include <cmath>
using namespace std;

int min(int a, int b){
    if (a<b){
        return a;
    }else{
        return b;
    }
}

int maxArea(int arr[], int size){
    int max = 0;
    int *front = arr;
    int *end = arr + size - 1;
    
    while(front < end){
        int length = min(*front, *end);
        int width = end - front;
        
        if (length*width > max){
            max = length*width;
        }
        
        if (*front<*end){
            front++;
        }else{
            end--;
        }
    }
    
    return max;
}

int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of array:";
    for (int i=0; i<n; ++i){
        cin>>arr[i];
    }
    
    int area = maxArea(arr, n);
    
    cout<<"Maximum area is:"<<area<<endl;

    return 0;
}