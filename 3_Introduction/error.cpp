#include<iostream>
using namespace std;
int display(int a)
{
    cout<<"there is the integer call:"<<a<<endl;
}
int display(int b){
    cout<<"there is the integer call:"<<b<<endl;
}
int main(){
    display(10);
    display(10.10);
}
