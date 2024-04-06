#include<iostream>
using namespace std;
int main (){
    int input,table;
    cout<<"Enter the number which table you want to print:"<<endl;
    cin>>input;
    cout<<"The table of given number is:"<<endl;
    for(int i=1;i<11;i++)
    {
        int table =input*i;
        cout<<table<<endl;
    }
    return 0;
}