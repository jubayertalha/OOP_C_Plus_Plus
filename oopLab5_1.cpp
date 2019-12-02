#include<iostream>

using namespace std;

int main(){

    int x;
    cin>>x;

    try{
        if(x<=0){
            throw "lol";
        }else{
            cout<<"The number is "<<x<<endl;
        }
        cout<<"After throw"<<endl;
    }catch(const char *e){
        cout<<"The exception is "<<e<<endl;
    }catch(...){
        cout<<"The 2nd exception"<<endl;
    }

    return 0;
}
