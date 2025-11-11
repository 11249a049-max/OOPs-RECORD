#include<iostream>
using namespace std;
class Math{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    }
};
int main()
{
    Math m;
    cout<<"Sum of 2 integers:"<<m.add(5,10)<<endl;
    cout<<"Sum of 2 double:"<<m.add(2.5,3.7)<<endl;
    return 0;
}