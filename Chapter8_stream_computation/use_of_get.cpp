//program to show the use of function

#include <iostream>
using namespace std;
const int MAX=50;
char str1[MAX];
char str2[MAX];
int main()
{
    cout<<"Enter a string terminated by newine:"<<endl;
    cin.get(str1,MAX);
cout<<"Enter multiline string terminated by $"<<endl;
cin.get(str2,MAX,'$');

cout<<"string you entered are: "<<endl;
cout<<"string 1: "<<str1<<endl;
cout<<"string 2: "<<str2<<endl;
return 0;
}