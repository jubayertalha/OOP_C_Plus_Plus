#include<iostream>
using namespace std;

class child{
    public:
        int a;
        child(int x){a=x;}
        ~child(){cout<<"child "<<a<<endl;}
        void fun(){a=99;}
        static void st(){cout<<"st"<<endl;}
};

int main(){
    child c(1);
    //cout<<"main 1"<<endl;
    //cout<<"main 2"<<endl;
    //c = child(11);
    //child ch(7);
    //cout<<"main 3"<<endl;
    //c.fun();
    child::st();
    return 0;
}
