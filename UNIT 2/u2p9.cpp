#include<iostream>
using namespace std;
class Employee{
    int id;
    char name[20];
    public:
    void getdata()
    {
        cout<<"Enter ID and name:";
        cin>>id>>name;
    }
    void display()
    {
        cout<<"ID:"<<id<<",Name:"<<name<<endl;
    }
};
int main()
{
    Employee e[3];
    for(int i=0;i<3;i++)
    {
        e[i].getdata();
    }
    cout<<"Employee Details:";
    for(int i=0;i<3;i++)
    {
        e[i].display();
    }
    return 0;
}