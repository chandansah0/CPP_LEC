//q.WAP in c++ to read the record of students(name,address,rollno.) and display using structure.

#include<iostream>

using namespace std;

struct student {

    char name[50];
    char address[50];
    int roll;
};

int main()
{
    student A[5];
    int i;
    //Entering the record of students.//
    for(i=0;i<5;++i)
    {
        cout<<"\nEntering the Records:" << endl;

        cout<<"Enter the name of student:";
        cin>>A[i].name;

        cout<<"Enter the address of students:";
        cin>>A[i].address;

        cout<<"Enter the roll no of students:";
        cin>>A[i].roll;

    }

    //Displaying the record of student.//
        for(i=0;i<5;++i)
        {
            cout<<"\nDisplaying The records:" << endl;

            cout<<"Name:\n"<<A[i].name <<endl;
            cout<<"Address:\n"<<A[i].address <<endl;
            cout<<"Roll No:\n"<<A[i].roll <<endl;


        }

        return 0;

}