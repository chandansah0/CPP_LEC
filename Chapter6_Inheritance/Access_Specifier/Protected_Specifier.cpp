#include <iostream>
using namespace std;
//base class
class parent
{
    //protected data members
    protected:
    int id_protected;
};
//sub class or derived from public base class
class child: public parent
{
    public:
    void setid(int id)
    {
        //child class is able to access the inherited
        //protected data members of base class
        id_protected = id ;

    }
    void displayId()
    {
        cout<<"Id protected is :"<<id_protected<<endl;

    }
};
//mian function 
int main(){
    child obj1;
    //member function of the derived class can
    //access the protected data members of the base class
    obj1.setId(81);
    obj1.displayId();
    return 0;
}


