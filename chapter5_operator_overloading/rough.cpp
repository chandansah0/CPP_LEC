#include <iostream>
using namespace std;
class rough
{
    public:
    int a=1;
    void operator++ (){
        ++a;
    }
};
int main()
{
    rough r1;
    cout<<"primitive type datatype"<<r1.a++;
    ++r1;
}