#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream stOut,stIn;
    stOut.open("oopLab5_2.txt",ios::out);
    stIn.open("oopLab5_2.txt",ios::in);
    cout<<"Opening done"<<endl;
    if(stIn&&stOut){
        stOut<<"Talha\n";
        stOut<<"Jubayer\n";
        stOut.close();
        cout<<"Writing done"<<endl;
        char ch;
        while(stIn>>ch){
            //stIn >> ch;
            cout<<ch;
        }
        stIn.close();
        cout<<"\nReading done"<<endl;
    }else{
        cout<<"Something wrong"<<endl;
    }
}
