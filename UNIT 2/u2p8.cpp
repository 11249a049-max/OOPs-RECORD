#include<iostream>
using namespace std;
class Student{
    int roll;
    static int count;
    public:
    Student(int r)
    {
        roll=r;
        count++;
    }
    static void showcount()
    {
        cout<<"Total Students:"<<count<<endl;
    }
    };
    int Student::count=0;
    int main(){
        Student s1(1),s2(2),s3(3);
        Student::showcount();
        return 0;
;    }


