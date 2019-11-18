#include<iostream>
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
}
