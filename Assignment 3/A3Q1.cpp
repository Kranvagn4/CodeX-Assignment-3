#include <iostream>
using namespace std;

struct student{
    int student_id;
    double GPA;
};

int main(){
    struct student Sanyukt;
    Sanyukt.student_id = 44;
    Sanyukt.GPA = 10.0;

    cout<<"The Student ID of the student is:"<<Sanyukt.student_id<<endl;
    cout<<"The GPA of the student is:"<<Sanyukt.GPA<<endl;

    return 0;
}