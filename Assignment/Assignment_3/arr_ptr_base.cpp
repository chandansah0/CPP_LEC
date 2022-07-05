//example of array of pointer to base class object
#include <iostream>
using namespace std;
class point
{
    public:
    virtual void draw()
    {
        cout<<"point"<<endl;
    }
};
class Line:public point
{
    public:
    void draw()
    {
        cout<<"Line"<<endl;
    }
};
class Triangle:public point
{
    public:
    void draw()
    {
        cout<<"Triangle"<<endl;
    }
};
class Polygon:public point
{
    void draw()
    {
        cout<<"Polygon"<<endl;
    }
};
class Circle:public point
{
    public:
    void draw()
    {
        cout<<"Circle"<<endl;
    }
};
int main()
{
    point pt;
    Line ln;
    Triangle tr;
    Polygon py;
    Circle cr;

    point *baseptr[]={&pt,&ln,&py,&cr};
    cout<<"Figure drawn by base pointer are:"<<endl;
    for(int i=0;i<5;i++)
        baseptr[i]->draw();
        
        
}