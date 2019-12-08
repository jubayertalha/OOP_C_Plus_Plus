#include <iostream>
using namespace std;

class Atm{
    protected:
        float balance;
        float amount;
    public:
        Atm(float balance){
            this->balance=balance;
        }
        virtual void withdraw()=0;
        void showBalance(){
            cout << "Your Balance is " << balance << endl;
        }
};

class Current:public Atm{
    public:
        Current(float currentBalance):Atm(currentBalance){}
        void withdraw(){
            cout << "Please enter amount to withdraw : ";
            cin >> amount;
            try{
                string ex;
                if(amount <= 0){
                    ex = "Amount can not be zero or negative";
                    throw ex;
                }else if(amount > balance){
                    ex = "You do not have much funds in current account to withdraw this amount";
                    throw ex;
                }else{
                    balance -= amount;
                    cout << "Balance withdrawal successful!!!. Your new current balance is " << balance << endl;
                }
            }catch(string ex){
                cout<<ex<<endl;
            }
        }

};

class Saving:public Atm{
    public:
        Saving(float savingBalance):Atm(savingBalance){}
        void withdraw(){
            cout << "Please enter amount to withdraw : ";
            cin >> amount;
            try{
                string ex;
                if(amount <= 0){
                    ex = "Amount can not be zero or negative";
                    throw ex;
                }else if(amount > balance){
                    ex = "You do not have much funds in saving account to withdraw this amount";
                    throw ex;
                }else{
                    balance -= amount;
                    cout << "Balance withdrawal successful!!!. Your new saving balance is " << balance << endl;
                }
            }catch(string ex){
                cout<<ex<<endl;
            }
        }
};

class Account{
    private:
        float balance,account_type,option;
        Atm *atm;
    public:
        Account(float bal){
            balance = bal;
            cout << "Welcome To ATM" << endl << endl;
            cout << "1) Current" << endl;
            cout << "2) Saving" << endl;
            cout << "Please select account type (1 or 2): ";
            cin >> account_type;
            cout << "1) Withdraw Amount" << endl;
            cout << "2) Balance Inquiry" << endl;
            cout << "Select an option (1 or 2): ";
            cin >> option;
        }
        void control(){
            if(account_type==1)atm = new Current(balance);
            else if(account_type==2)atm = new Saving(balance);
            else cout << "Invalid Account type selected." << endl;

            if(option==1)atm->withdraw();
            else if(option==2)atm->showBalance();
            else cout << "Invalid Option Selected." << endl;
        }
};

int main()
{
    Account myAccount(100);
    myAccount.control();
    cout << "Thank You Using Our ATM!" << endl;
    return 0;
}
