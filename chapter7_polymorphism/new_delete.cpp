#include <iostream>
using namespace std;

int main() //declare a integer pointer
{
    int*pointInt;
    float *pointfloat;

    //dynamically allocated memory
    pointInt = new int;
    pointfloat =new float;
    cout<<"Adress of pointInt is"<<pointInt<<endl;
    cout<<"Adress of pointfloat is"<<pointfloat<<endl; 

    //assising value to the memory
    *pointInt=45;
    *pointfloat=45.45;
    cout<<"value of pointInt is"<<*pointInt<<endl;
    cout<<"value of pointfloat is"<<*pointfloat<<endl;

    //deallocating the memory
    delete pointInt;
    delete pointfloat;

}
