//wap for printing numbers divisible by 3 from 1 to 100
#include<iostream>
using namespace std;
int main ()
{
    cout<<"Numbers divisible by 3 are:"<<endl;
    
    for (int i =1; i <=100; i++)
    {
        if (i%3==0)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
    
}