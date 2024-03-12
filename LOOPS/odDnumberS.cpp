//WAP for printing all odd numbers from 1 to 100
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"printing odd numbers from 1 to 100:"<<endl;
    for (int i = 0; i <=100; i++)
    {
       if (i%2 !=0)
       {
       cout<<i<<endl;
       }
       
    }

    return 0;
}