// wap to calculate area and volume of room //
#include<iostream>
using namespace std;
class room
{
    private:
    int length;
    int breadth;
    int height;

    public:
    int setValue(int len, int bth,int hgt){
        length=len;
        breadth=bth;
        height=hgt;
    }
    int calculateArea() {
     return (length*breadth);
    }
    int calculateVolume() {
     return (length*breadth*height);
    }
 };
 int main(){
     room room1;

     room1.setValue(5,7,3);
    cout<<"the area of room is:"<<room1.calculateArea()<<endl;
    cout<<"the voulme of room is:"<<room1.calculateVolume()<<endl;
 }
