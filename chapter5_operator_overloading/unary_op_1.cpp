//after overloading the operator it can be applied with an object in the same way as it is applied to the basic type 

#include <iostream>
using namespace std;
class count
{
    private:
    int a;

    public:
    count()
    {
        a=10;

    }
    void operator++ ()
    {
        ++a;
    }
    void display()
    {
        cout<<"value:"<<a<<endl;

    }

};
int main()
{
    count c;
    c.display();
    ++c;
    c.display();

}