#include<iostream>

using namespace std;
double sum(int x,double y,int z)
{
    return x+y+z;
}
int sum (int a=1,double b=1.5)
{
    return a+b;
}
int main(){
    cout<<sum(1,2.2,3)<<endl;
    cout<<sum();
}
 
