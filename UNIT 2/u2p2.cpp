#include<iostream>
using namespace std;
class Car{
    private:
    string brand;
    string model;
    float price;
    public:
    Car(){
        brand="unknown";
        model="N/A";
        price=0.0;
    }
    Car(string b,string m,float p){
        brand=b;
        model=m;
        price=p;
    }
    Car(const Car &c){
        brand=c.brand;
        model=c.model;
        price=c.price;
    }
    void display(){
        cout<<"BRAND:"<<brand
            <<",MODEL:"<<model
            <<",PRICE:"<<price<<endl;
    }
};
int main(){
    Car c1;
    Car c2("Hyundai","i20",850000.0);
    Car c3(c2);
    cout<<"Cars in showroom:";
    c1.display();
    c2.display();
    c3.display();
    return 0;
}