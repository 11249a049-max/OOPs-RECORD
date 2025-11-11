#include<iostream>
using namespace std;
class HotelRoom{
    private:
    int roomnumber;
    string guestname;
    int daysbooked;
    public:
    HotelRoom(int r,string g,int d){
        roomnumber=r;
        guestname=g;
        daysbooked=d;
        cout<<"Room "<<roomnumber<<" booked for "<<guestname<<" for "<<daysbooked<<" days"<<endl;
    }
    ~HotelRoom(){
        cout<<"Room "<<roomnumber<<" is now free checkout completed for "<<guestname<<"."<<endl;
    }
    void display(){
        cout<<"Guest:"<<guestname<<",Room Number:"<<roomnumber<<",Days Booked:"<<daysbooked<<endl;
    }
};
int main(){
    cout<<"Hotel Booking System:"<<endl;
    {
        HotelRoom r1(101,"Haritha",3);
        HotelRoom r2(102,"Nandini",2);
        r1.display();
        r2.display();
    }
    return 0;
}