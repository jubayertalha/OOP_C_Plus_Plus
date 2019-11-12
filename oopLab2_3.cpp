#include<iostream>
using namespace std;

class GrandFather{
    public:
        void methodGFather(){
            cout<<"I am Grand Father"<<endl;
        }
};

class Father:public GrandFather{
    public:
        void methodFather(){
            cout<<"I am Father"<<endl;
        }
};

class Son:public Father{
    public:
        void methodSon(){
            cout<<"I am Son"<<endl;
        }
};

int main(){
    Son obj;
    obj.methodGFather();
    obj.methodFather();
    obj.methodSon();
    return 0;
}

