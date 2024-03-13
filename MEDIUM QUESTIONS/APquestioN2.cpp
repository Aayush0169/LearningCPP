//Display this AP - 1,3,5,7,9.. upto ‘n’ terms. 
#include<iostream>
using namespace std;
int main ()
{
    int a =1;
     int b= 2;
    int n;
cout<<"enter number of terms  you want to print the AP:"<<endl;
cin>>n;
cout<<"The Arithmetic Progress:"<<endl;
for (int i = 1; i <=n; i++)
{
   cout<<a<<endl;
   a+=b;

}

return 0;
}