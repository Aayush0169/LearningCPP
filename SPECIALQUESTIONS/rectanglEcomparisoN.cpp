//comparing area and perimetere of Rectnagle
#include<iostream>
using namespace std;
int main  (){
    int l,b;
    cout<<"enter the length of rectangle:"<<endl;
    cin>>l;
cout<<"enter the breadth of rectangle:"<<endl;
cin>>b;
int area = l*b;
int perimetere = 2*(l+b);
if (area>=perimetere)
{
   cout<<"perimetre is:"<<perimetere<<endl<<"area is:"<<area<<endl<<" area is greater than Perimetre"<<endl;
}
else
cout<<"perimetre is:"<<perimetere<<endl<<"area is:"<<area<<endl<<"the perimetere is greater than area"<<endl;
return 0;

}