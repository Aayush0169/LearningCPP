//Wap for calculating simple intrest
#include<iostream>
using namespace std;
int main()
{
    float p,r,t;
    cout<<"enter your principle:"<<endl;
    cin>>p;
    cout<<"enter your rate:"<<endl;
    cin>>r;
    cout<<"enter the time"<<endl;
    cin>>t;
    float intrest =p*r*t/100;
    cout<<"your intrest is:"<<intrest<<endl;
    return 0;

}