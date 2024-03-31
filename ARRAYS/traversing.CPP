//traversing elemnts of an array
#include<iostream>
using namespace std;
int main ()
{ 
    char vowels[]={'a','e','i','o','u'};
    
    int size=sizeof(vowels)/sizeof(vowels[0]);
   for (int i=0;i<size;i++)
   cout<<vowels[i]<<" ";
    return 0;

}