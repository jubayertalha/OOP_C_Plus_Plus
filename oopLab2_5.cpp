#include<iostream>
using namespace std;

class vehicle{
    public:
        static string vName,vColor;
        static int noOfWheels, engineSize;

        /*static void setVname(string n){
            vName = n;
        }
        static void setVcolor(string c){
            vColor = c;
        }
        static void setWheels(int w){
            noOfWheels = w;
        }
        static void setEngine(int e){
            engineSize = e;
        }*/
        static void displayVehicle(){
            cout<<vName<<" has "<<noOfWheels<<" wheels"<<endl;
            cout<<vName<<" has "<<engineSize<<" CC engine"<<endl;
        }
};

string vehicle::vName = "BMW";
int vehicle::noOfWheels = 4;
int vehicle::engineSize = 1500;

class Bus:public vehicle{
    public:
        static void displayBus(){
            cout<<vName<<" has "<<noOfWheels<<" wheels"<<endl;
            cout<<vName<<" has "<<engineSize<<" CC engine"<<endl;
        }
};

class Car:public vehicle{
    public:
        static void displayCar(){
            cout<<vName<<" has "<<noOfWheels<<" wheels"<<endl;
            cout<<vName<<" has "<<engineSize<<" CC engine"<<endl;
        }
};

class Bike:public vehicle{
    public:
        static void displayBike(){
            cout<<vName<<" has "<<noOfWheels<<" wheels"<<endl;
            cout<<vName<<" has "<<engineSize<<" CC engine"<<endl;
        }
};

int main(){
    //Bus b1;
    //Car c1;
    //Bike bi1;

    //Bus::setVname("Double-Decker");
    //Bus::setWheels(6);
    //Bus::setEngine(2500);

    //c1.setVname("BMW");
    //c1.setWheels(4);
    //c1.setEngine(1500);

    //bi1.setVname("Yamaha");
    //bi1.setWheels(2);
    //bi1.setEngine(100);

    Bus::displayBus();
    Car::displayCar();
    Bike::displayBike();

    //vehicle::setVname("Double-Decker");
    //vehicle::setWheels(6);
    //vehicle::setEngine(2500);
    vehicle::displayVehicle();

    return 0;

}
