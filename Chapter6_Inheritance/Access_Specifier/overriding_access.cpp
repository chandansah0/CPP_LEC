#include<iostream>
using namespace std;
class base{
      public:
     void print(){
        cout<<"Base function "<<endl;
    }
};
class derived : public base
{
public:
   void print(){
    cout<<"derived function"<<endl;
}
};
int main(){
derived d1,d2;
d1.print();
d2.base::print();
}