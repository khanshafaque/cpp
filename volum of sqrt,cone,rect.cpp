#include <iostream>
using namespace std;
int main()
{
    double s,squ,cone,rect,r,h,i=3.14,l,w;
    cout<<"Enter a side";
    cin>>s;
    squ=s*s*s;
    cout<<"volume of square=:"<<squ<<endl;
    cout<<"Enter a radius and height";
    cin>>r>>h;
    cone=i*r*r*h/3;
    cout<<"Volume of cone="<<cone<<endl;
    cout<<"Enter the width length and height";
    cin>>w>>l>>h;
    rect=w*l*h;
    cout<<"Volume of rectangle="<<rect<<endl;

 

    return 0;



}