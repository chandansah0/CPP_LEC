#include <iostream>
using namespace std;
int main()
{
    char c,str[25];
    cout<<"Enter a character:";
    cin.get(c);
    cin.get(str,10);
    cout<<"\n The entered character is ";
    cout.put(c);
    cout<<str;
    return 0;
    
}