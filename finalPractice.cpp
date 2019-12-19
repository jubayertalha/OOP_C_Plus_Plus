#include <iostream>

using namespace std;

class A{
    public:
        A(){
            cout<<"C"<<endl;
        }
        ~A(){
            cout<<"D"<<endl;
        }
};

int main() {
    A a,*aa;
    a = A();
    aa = new A();

    delete aa;

    return 0;
}
