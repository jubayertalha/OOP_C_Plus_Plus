#include<iostream>
using namespace std;

class MyPhBook{
    private:
        string name,area,phNum;
    public:
        void setName(string n){
            name = n;
        }
        void setArea(string a){
            area = a;
        }
        void setNum(string ph){
            phNum = ph;
        }
        void displayBook(){
            cout<<"Name = "<<name<<endl;
            cout<<"Area = "<<area<<endl;
            cout<<"Mobile = "<<phNum<<endl;
            cout<<"****************************"<<endl;
        }
};

int main(){

    MyPhBook client1,client2,client3,client4,client5;

    client1.setName("Kabir Ahmed");
    client1.setArea("Gulshan");
    client1.setNum("018252633");

    client2.setName("Sahariar Khan");
    client2.setArea("Kalabagan");
    client2.setNum("017762633");

    client3.setName("Almas Kabir");
    client3.setArea("Lallmatia");
    client3.setNum("015902633");

    client4.setName("humayun Chowdhury");
    client4.setArea("Dhanmondi");
    client4.setNum("018252633");

    client5.setName("Raihan Yusuf");
    client5.setArea("Banani");
    client5.setNum("018902633");

    client1.displayBook();
    client2.displayBook();
    client3.displayBook();
    client4.displayBook();
    client5.displayBook();

    return 0;
}
