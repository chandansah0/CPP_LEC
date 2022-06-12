#include <iostream>
using namespace std;
class Animal {
    Public:
    void eat() {
        cout<<"Eating..."<<endl;
    }

};
class Dog: public Animal
{
    public:
    void Bark(){
        cout<<"Barking...";
    }
};
int main() {
    Dog d1;
    d1.Eat();
    d1.Bark();
    return 0;
}