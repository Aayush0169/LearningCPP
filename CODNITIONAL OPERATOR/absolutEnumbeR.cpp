//printing absolute value of a number
#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"enter a number of your choice:"<<endl;
    cin>>a;
    if (a<0)
    {
    cout<<"absolute value is:"<<-a<<endl;
    }
    else {
        cout<<"absolute value is:"<<a;
    }
    
    return 0;
}
