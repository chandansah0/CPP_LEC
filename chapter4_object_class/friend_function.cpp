#include <iostream>
using namespace std;

class myclass1{
   friend class myclass2;

   private:
   int x;
   public:
   myclass1(int y)
{
    x=y;
}
};
class myclass2{

public:
myclass2(myclass1 obj){
    cout<<"the value of x is :"<<obj.x<<endl;
}
};
int main(){
    myclass1 obj1(4);
    myclass2 obj2(obj1);
    return 0;
}
//friend_function