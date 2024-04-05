#include<iostream> 
#include<vector>
using namespace std;
int main(){

   vector<int> vec ={12,16,14,15,16,17,18,19,20,};
   cout<<"size is :"<<vec.size()<<endl;
   cout<<"capacity is :"<<vec.capacity()<<endl<<endl;
   cout<<"The elements are:"<<endl;
   for(int elements : vec){
    cout<<elements<<" ";
   }

return 0;

}
