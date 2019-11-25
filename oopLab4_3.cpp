#include<iostream>
using namespace std;

class Directory{
    protected:
        string personName;
        string dateOfBirth;
    public:
        void setPersonInfo(string pn,string db){
            personName = pn;
            dateOfBirth = db;
        }
        virtual void displayInfo(){
            cout<<"Name = "<<personName<<endl;
            cout<<"DoB = "<<dateOfBirth<<endl;
        }
};

class NationalDirectory:public Directory{
    protected:
        int personAge;
        string personCity;
    public:
        void setPersonAge(int age){
            personAge = age;
        }
        void setPersonCity(string city){
            personCity = city;
        }
        void displayInfo(){
            cout<<"Age = "<<personAge<<endl;
            cout<<"City = "<<personCity<<endl;
        }
};

class LocalDirectory:public Directory{
    protected:
        string personAddress;
        string personTelNo;
        string personLocalArea;
        double zipCode;
    public:
        void setPersonAddress(string address){
            personAddress = address;
        }
        void setPersonTelNo(string telNo){
            personTelNo = telNo;
        }
        void setPersonLocalArea(string Larea){
            personLocalArea = Larea;
        }
        void setPersonZipcode(double zc){
            zipCode = zc;
        }
        void displayInfo(){
            cout<<"Address = "<<personAddress<<endl;
            cout<<"Tel = "<<personTelNo<<endl;
            cout<<"Local Area = "<<personLocalArea<<endl;
            cout<<"Zip code = "<<zipCode<<endl;
        }
};

class Profession:public Directory{
    protected:
        string personProfession;
        string personInstitution;
        string personGrade;
        double personSalary;
    public:
        void setPersonProfession(string prof){
            personProfession = prof;
        }
        void setPersonInstitution(string inst){
            personInstitution = inst;
        }
        void setPersonGrade(string Pgrade){
            personGrade = Pgrade;
        }
        void setPersonSalary(double s){
            personSalary = s;
        }
        void displayInfo(){
            cout<<"Profession = "<<personProfession<<endl;
            cout<<"Institution = "<<personInstitution<<endl;
            cout<<"Grade = "<<personGrade<<endl;
            cout<<"Salary = "<<personSalary<<endl;
        }
};

int main(){

    Directory *person;
    Directory p;
    NationalDirectory n;
    LocalDirectory l;
    Profession f;

    p.setPersonInfo("S Ahmed","24/07/1968");
    n.setPersonAge(45);
    n.setPersonCity("Dhaka");
    l.setPersonAddress("House-3,Road 18");
    l.setPersonTelNo("017542140");
    l.setPersonLocalArea("Gulshan 2");
    l.setPersonZipcode(1211);
    f.setPersonProfession("Lecturer");
    f.setPersonInstitution("AIUB");
    f.setPersonGrade("Band-6");
    f.setPersonSalary(50000);

    person = &p;
    person -> displayInfo();

    person = &n;
    person -> displayInfo();

    person = &l;
    person -> displayInfo();

    person = &f;
    person -> displayInfo();

    return 0;

}

