// wap to calculate area and volume of room //
#include<iostream>
using namespace std;
class room 
{
    public:
    int length;
    int breath;
    int height;
    int calculateArea() {
     return (length*breath);
    }
    int calculateVolume() {
     return (length*breath*height);
    }
 };
 int main(){
     room room1;
     room1.length = 10;
     room1.breath = 2;
     room1.height = 5;
    cout<<"the area of room is:"<<room1.calculateArea()<<endl;
    cout<<"the voulme of room is:"<<room1.calculateVolume()<<endl;
 }
