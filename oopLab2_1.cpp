#include<iostream>
using namespace std;

class BanckAccount{
    private:
        char CusName[50];
        char CusId[10];
        float accBalance;
    public:
        void setCusDetails(){
            cin>>CusName;
            cin>>CusId;
        }
        float checkBalance(){
            cin>>accBalance;
            return accBalance;
        }
        float depositMoney(float amount){
            accBalance+=amount;
            return accBalance;
        }
        float withdrawMoney(float amount){
            accBalance-=amount;
            return accBalance;
        }
        float showInfo(){
            cout<<CusName<<endl;
            cout<<CusId<<endl;
            cout<<accBalance<<endl;
        }
};

int main(){
    BanckAccount customer1,customer2;

    customer1.setCusDetails();
    customer1.checkBalance();
    customer1.depositMoney(50000.00);
    customer1.withdrawMoney(20000.00);

    customer2.setCusDetails();
    customer2.checkBalance();
    customer2.depositMoney(15000.00);
    customer2.withdrawMoney(5000.00);

    customer1.showInfo();
    customer2.showInfo();

    return 0;
}
