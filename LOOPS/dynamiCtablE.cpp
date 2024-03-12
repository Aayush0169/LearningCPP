//WAP for printing table of given number
#include<iostream>
using namespace std;
int main ()
{
 int a;
    cout<<"Enter the number which table you want to print"<<endl;
cin>>a;
cout<<"Heres the table of:"<<a<<endl;
for (int i = 1; i <=10; i++)
{
   int t=a*i;
   cout<<t<<endl;
}
return 0;
}