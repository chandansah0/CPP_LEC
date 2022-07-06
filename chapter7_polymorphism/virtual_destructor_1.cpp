#include <iostream>
using namespace std;

class helloworld{
    public:
    helloworld(){
        cout<<"constructor"<<endl;
    }
    ~helloworld(){
        cout<<"destructor"<<endl;
    }
    void virtual display(){
        cout<<"display"<<endl;
    }
};
class hii:public helloworld{
    public:
    hii(){
        cout<<"constructor 2"<<endl;
    }
    ~hii(){
        cout<<"destructor 2"<<endl;

    }
};
int main(){
    helloworld *a;
    a=new hii;
    a->display();
    delete a;
}