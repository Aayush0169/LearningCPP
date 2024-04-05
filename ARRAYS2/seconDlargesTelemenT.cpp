/* Wap for second largest element in an array */

 #include <iostream>
using namespace std;

int main() {
   int input;
   cout<<"enter the size of array: "<<endl;
   cin>>input;
   int check[input];
for(int i=0;i<input;i++)
{
cout<<"Enter the element:"<<endl;
cin>>check[i];}
    
cout<<"the elements are: "<<endl;
for(int i=0;i<input;i++)
{
    cout<<check[i]<<" ";
}
    return 0;
}


