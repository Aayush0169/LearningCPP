//WAP to print odd numbers from 1 to 100
#include<iostream>
using namespace std;
int main ()
{
 
 int i;
    cout<<"Odd numbers from 1 to 100 are:"<<endl;
    for (int  i = 1; i <=100; i++)
    {
      if (i % 2==!0)
      cout<<i<<" ";
    }
    return 0;
}