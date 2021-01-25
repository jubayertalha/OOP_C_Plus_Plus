#include<iostream>#include<cstring>#include<cmath>
using namespace std;int toDecimal(string number,int base){    int decimal= 0;    int size = number.length();    for(int i=0; i<size; i++){        if(number[i]>='A'){            decimal += (number[i]-'A'+10) *pow(base,size-i-1);        }else{            decimal += (number[i]-'0') *pow(base,size-i-1);        }    }    return decimal;}char singleDigitPreprocees(int n){    if(n<10){        return n+'0';    }else if(n >= 10){        return 'A'+(n-10);    }}string decimalTo(int decimal,int base = 16){    char remainders[101];    if(decimal == 0){        return "0";    }    int i = 0;    while(decimal > 0){        char rem = singleDigitPreprocees(decimal%base);        decimal = decimal/base;        remainders[i++] = rem;    }    string any_base = "";    while(i>=0){        any_base += remainders[--i];    }    return any_base;}
int main(){    int decimal;    string any_base;    int base;    while(1){        cout<<"\nChose Option:\n\t1. Decimal to Any Base\n\t2. Any Base to Decimal\n\tEnter Option: ";        int option;        cin>>option;        cout<<endl;        if(option==1){            cout<<"Enter the Decimal Number: ";            cin>>decimal;            cout<<"Enter the Base: ";            cin>>base;            cout<<endl;            cout<<decimal<<" converted to "<<base<<" based Number: "<<decimalTo(decimal,base)<<endl;        }else if(option==2){            cout<<"Enter Any Base Number: ";            cin>>any_base;            cout<<"Enter the Base: ";            cin>>base;            cout<<endl;            cout<<any_base<<" converted to Decimal Number: "<<toDecimal(any_base,base)<<endl;        }else{            cout<<"Invalid Option!"<<endl;        }        cout<<"\nDo you want to convert again? ( Y to convert again, anything to exit ) : ";        char convert;        cin>>convert;        if(convert!='Y'){            break;        }    }    return 0;}
/*class Pet{
    protected:
        string Name;
    public:
        Pet(string n){
            Name = n;
        }

        void MakeSound(){
            cout << Name << "the Pet says: Shh! Shh!"<< endl;
        }
};
class Cat : public Pet{
    public:
        Cat(string n) : Pet(n) { }

        void MakeSound() {
            cout << Name << "the Cat says: Meow! Meow!" << endl;
        }
};

class Dog : public Pet{
    public:
        Dog(string n) : Pet(n) { }

        void MakeSound(){
            cout << Name << "the Dogsays: Woof! Woof!" << endl;
        }
};

int main() {
    Cat *a_cat;
    Dog *a_dog;

    a_cat = new Cat("Kitty");
    a_dog = new Dog("Doggie");

    a_cat -> MakeSound();
    static_cast<Pet *>(a_cat) -> MakeSound();

    a_dog -> MakeSound();
    static_cast<Pet *>(a_dog) -> MakeSound();

    return 0;
}*/

/*#include<iostream>
using namespace std;

class child{
    public:
        int a;
        child(){
            cout<<"Empty"<<endl;
        }
        child(int x){
            a=x;
            cout<<"child c "<<0<<endl;
        }
        ~child(){
            cout<<"child d "<<0<<endl;
        }
        void fun(){
            a=99;
        }
        static void st(){
            cout<<"st"<<endl;
        }
};

class b:public child{
public:
    b(){
        cout<<"EB"<<endl;
    }
};

class c: public b,public child{
public:
    c(int x){
        cout<<"c c "<<0<<endl;
    }
    ~c(){
        cout<<"c d "<<0<<endl;
    }
};

int main(){
    c cc(1);
    cout<<"main 1"<<endl;
    cout<<"main 2"<<endl;
    cc = c(11);
//    cc.fun();
    child ch(7);
    cout<<"main 3"<<endl;
    child::st();
    return 0;
}*/
