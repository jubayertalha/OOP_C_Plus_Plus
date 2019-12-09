#include<iostream>
using namespace std;

class account{
    private:
        float number;
        string name;
        string type_of_account;
    public:
        account(string name,string type_of_account,float balance){
            this-> name = name;
            this-> type_of_account = type_of_account;
            number = balance;
            cout<<"Account created successfully"<<endl;
        }
        void deposite(float ammount){
            cout<<ammount<<" is successfully deposited in your account"<<endl;
            cout<<"Your previous balance was "<<number<<endl;
            number+=ammount;
            cout<<"Your current balance is "<<number<<endl;
        }
        void withdraw(float ammount){
            cout<<ammount<<" withdrawal is successful from your account"<<endl;
            cout<<"Your previous balance was "<<number<<endl;
            number-=ammount;
            cout<<"Your current balance is "<<number<<endl;
        }
        float getBalance(){
            return number;
        }
};

int main(){
    cout<<"Welcome"<<endl;
    cout<<"Enter Your Name: ";
    string name;
    cin>>name;
    cout<<"Enter Account Type: ";
    string accountType;
    cin>>accountType;
    cout<<"Enter Current Balance: ";
    float balance;
    cin>>balance;

    account acc(name,accountType,balance);

    while(1){
        int exitOption;
        cout<<"1 -> Next\n2 -> Exit\nOption: ";
        cin>>exitOption;
        if(exitOption==1){
            int option;
            cout<<"1 -> Deposit\n2 -> Withdraw\nOption: ";
            cin>>option;
            if(option==1){
                cout<<"Enter amount: ";
                float dAm;
                cin>>dAm;
                try{
                    string ex;
                    if(dAm<0){
                        ex = "Amount can not be negative";
                        throw ex;
                    }else{
                        acc.deposite(dAm);
                    }
                }catch(string e){
                    cout<<e<<endl;
                }
            }else if(option==2){
                cout<<"Enter amount: ";
                float wAm;
                cin>>wAm;
                try{
                    string ex;
                    if(wAm<0){
                        ex = "Amount can not be negative";
                        throw ex;
                    }else if(wAm>acc.getBalance()){
                        ex = "You have insufficient balance";
                        throw ex;
                    }else{
                        acc.withdraw(wAm);
                    }
                }catch(string e){
                    cout<<e<<endl;
                }
            }else{
                cout<<"Invalid Option"<<endl;
            }
        }else if(exitOption==2){
            break;
        }else{
            cout<<"Invalid Option"<<endl;
        }
    }

    cout<<"Program Exit"<<endl;

    return 0;
}
