//Wap for comparing that Area is Greater than circumference or Not

#include<iostream>
using namespace std;
int main ()
{
int r;
cout<<"enter the radious of the circle:"<<endl;
cin>>r;
float area = 3.14*r*r;
float circum =3.14*2*r;
if(area>circum)
{
    cout<<"the area of Circle is greater than circumference"<<endl<<"area is :"<<area<<endl;
cout<<"circumference is:"<<circum<<endl;
}
else
{
    cout<<"Area is not greater than circumference"<<endl<<"circumference is :"<<circum<<endl;
    cout<<"area is:"<<area;

}
return 0;
}