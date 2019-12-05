#include<iostream>
using namespace std;

class Person{
    protected:
        string name;

    public:
        Person(string name){
            this -> name = name;
        }

        void display(){
            cout<<"Person Name: "<<name<<endl;
        }
};

class Student : public Person{
    private:
        int id;

    public:
        Student(string name, int id) : Person(name){
            this -> id = id;
        }~Student(){
            id = 0;
        }

        void display(){
            cout<<"Student Name: "<<name<<endl;
        }
        void display(double gpa){
            cout<<"Student Name: "<<name<<" Student ID: "<<id<<" GPA: "<<gpa<<endl;
        }
};

int main(){

    Person pc("Person");
    Student *sc = new Student("Student",41468);

    pc.display();
    sc -> display();
    sc -> display(4.08);

    sc = new Student("Talha",455);
    sc -> display(4.0);

    return 0;
}
