//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main (){
      int a=4;
      int b=3;
      int n;
      cout<<"Enter the number of terms:"<<endl;
      cin>>n;
      cout<<"The AP is:"<<endl;
      for (int i = 0; i <n; i++)
      {
       cout<<a<<" ";
       a+=b;
      }

  return 0;

}