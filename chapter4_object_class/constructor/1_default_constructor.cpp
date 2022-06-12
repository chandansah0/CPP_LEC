// default constructor

#include <iostream>
using namespace std;
class construct
{
    public:
    int a,b;
    construct() {
        cout <<"construct is"<<endl;
        a=10;
        b=20;
    }
    void display() {
       cout<<"I am not contructor:"<<endl;
    }
};
int main() {
    construct c;
    c.display();
}
