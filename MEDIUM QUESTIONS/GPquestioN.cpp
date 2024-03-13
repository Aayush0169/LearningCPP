//Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms. a
#include<iostream>
using namespace std;
int main (){
int a =1;
int b=2;
int n;
cout<<"enter the number of terms you want to print the GP:"<<endl;
cin>>n;

for (int i = 0; i <= n; i++)
{
    cout<<a<<endl;
    a*=b;
}

return 0;

}