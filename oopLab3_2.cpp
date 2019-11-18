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
        void displayInfo(){
            cout<<"Name = "<<personName<<endl;
            cout<<"DoB = "<<dateOfBirth<<endl;
        }
};

class NationalDirectory{
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
        void displayNationalInfo(){
            cout<<"Age = "<<personAge<<endl;
            cout<<"City = "<<personCity<<endl;
        }
};

class LocalDirectory{
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
        void displayLocalInfo(){
            cout<<"Address = "<<personAddress<<endl;
            cout<<"Tel = "<<personTelNo<<endl;
            cout<<"Local Area = "<<personLocalArea<<endl;
            cout<<"Zip code = "<<zipCode<<endl;
        }
};

class Profession:public Directory,public NationalDirectory,public LocalDirectory{
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
        void DisplayProfession(){
            displayInfo();
            displayNationalInfo();
            displayLocalInfo();
            cout<<"Profession = "<<personProfession<<endl;
            cout<<"Institution = "<<personInstitution<<endl;
            cout<<"Grade = "<<personGrade<<endl;
            cout<<"Salary = "<<personSalary<<endl;
        }
};

int main(){

    Profession person;

    person.setPersonInfo("S Ahmed","24/07/1968");
    person.setPersonAge(45);
    person.setPersonCity("Dhaka");
    person.setPersonAddress("House-3,Road 18");
    person.setPersonTelNo("017542140");
    person.setPersonLocalArea("Gulshan 2");
    person.setPersonZipcode(1211);
    person.setPersonProfession("Lecturer");
    person.setPersonInstitution("AIUB");
    person.setPersonGrade("Band-6");
    person.setPersonSalary(50000);

    person.DisplayProfession();

    return 0;

}
