#include <iostream>
using namespace std;
class student {
    public:
    double mark;
    student(double m){
        mark =m;
    }
};
void calculateAverage(student s1, student s2){
    double average;
    average = (s1.mark+s2.mark)/2;
    cout<<"the average mark is:"<<average;
}
int main(){
    student s1(2.4);
    student s2(8.9);
    calculateAverage(s1,s2);
    return 0;
}
