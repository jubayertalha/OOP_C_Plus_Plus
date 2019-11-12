#include<iostream>
#include<string.h>
using namespace std;

class A{
    protected:
        int a;
        string name;
    public:
        void setValue(int x,string n){
            this -> a = x;
            this -> name = n;
        }
        void Show(){
            cout<<"Value = "<<a<<endl;
            cout<<"Name = "<<name<<endl;
        }
};

class B{
    protected:
        int val1,val2;
    public:
        virtual void bMethod(int x, int y){
            this-> val1 = x;
            this-> val2 = y;
            cout<<val1-val2<<endl;
            cout<<"This is sub class method"<<endl;
        }
};

class C:public A,public B{
    private:
        int val1, val2;
    public:
        void cMethod(int x, int y){
            this-> val1 = x;
            this-> val2 =y;
            cout<<val1*val2<<endl;
            cout<<"This is sub class method"<<endl;
        }
        void bMethod(int x, int y){
            cout<<"Virtual"<<endl;
        }
};

int main(){
    C obj;
    B *b;
    //obj.setValue(40,"JONNY");
    //obj.Show();
    //obj.bMethod(50,20);
    //obj.cMethod(10,10);
    b = &obj;
    //b = new B;
    b ->bMethod(4,5);
    return 0;
}
