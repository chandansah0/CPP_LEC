#include<iostream>
using namespace std;
void refer (int a)
{
    a=10;
    cout<<"the value is:"<<a<<endl;
}
void normal(int b){
    b=20;
    cout<<"the value is:"<<b<<endl;
}
int main(){
   int  a=15;
   int b=25;
    refer(a);
    normal(b);
    cout<<"the value inside main of a is:"<<a<<endl;
    cout<<"the value inside main of b is:"<<b<<endl;
}

