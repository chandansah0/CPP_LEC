#include <iostream>
using namespace std;
class Helloworld{
    public:
    Helloworld(){
        cout<<"Constructor is called:"<<endl;
    }
    ~Helloworld(){
        cout<<"Destructor is called:"<<endl;

    }
    void display(){
        cout<<"Hello world!"<<endl;
    }
    
    };
    int main(){
        //object created 
        Helloworld obj;
        //Member function called
        obj.display();
        return 0;
    }

    //destructor