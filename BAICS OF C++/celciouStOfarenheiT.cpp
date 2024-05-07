/*
wap to convert temprearture degree celcious to degree farenheit
*/
#include<iostream>
using namespace std;

int main (){

int temp,converted;

cout<<"Enter tempreature in degree celcious"<<endl;
cin>>temp;

converted=(temp*9/5)+32;

cout<<"The tempreature in degree Farenheit is: "<<converted<<endl;
return 0;

}