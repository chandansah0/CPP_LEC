//accessing member of objects

#include <iostream>
using namespace std;
class test
{
    public:
    int data;
    test()
    {
        cout<<"\nconstructor test() is called"<<endl;
        data=55;
    }
    ~test()
    {
        cout<<"\nDestructor ~test() is called"<<endl;
    }
    void show()
    {
        cout<<"\ndata is "<<data<<endl;
    }

};
int main()
{
    test *ptr;
    test obj;  //constructor is invoked here
            //store the address os statically created object tobj
    ptr=&tobj;
    cout<<"\nAccessing object through tobj.show()...";
    tobj.show();
    cout<<"\nAccessing object through ptr->show()...";
    ptr->show();
    return 0;
}