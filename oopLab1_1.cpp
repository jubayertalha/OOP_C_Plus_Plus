#include<iostream>
using namespace std;

class Student{
    private:
        string versity,name;
        int id,age;

    public:
        void setName(string n){
            name = n;
        }
        void setVersity(string v){
            versity = v;
        }
        void setId(int i){
            id = i;
        }
        void setAge(int a){
            age = a;
        }
        void displayAllInfo(){
            cout<<"Name : "<<name<<endl;
            cout<<"Versity : "<<versity<<endl;
            cout<<"Id : "<<id<<endl;
            cout<<"Age : "<<age<<endl;
        }
        void getVersity(){
            cout<<"Versity : "<<versity<<endl;
        }
        string getName(){
            return name;
        }
        int getId(){
            return id;
        }
        int getAge(){
            return age;
        }

};

int main(){

    Student alve,talha;

    alve.setName("Alve");
    alve.setVersity("AIUB");
    alve.setId(123);
    alve.setAge(20);
    //alve.displayAllInfo();

    alve.getVersity();

    return 0;
}
