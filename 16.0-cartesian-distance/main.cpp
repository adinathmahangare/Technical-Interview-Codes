#include <iostream>
#include <math.h> 
using namespace std;

float CartesianDistance(int x1, int y1, int x2, int y2){
    float dist = 0;
    
    dist = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    
    return dist;
}

int main()
{
    int x1, x2, y1, y2;
    cout<<"Enter your first point co-ordinates:";
    cin>>x1>>y1;
    cout<<"Enter you second point co-ordinates:";
    cin>>x2>>y2;
    
    cout<<"Distance between this two points is "<<CartesianDistance(x1, y1, x2, y2);
    

    return 0;
}