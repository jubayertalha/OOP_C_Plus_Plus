#include <iostream>

using namespace std;

class Pet{
    protected:
        string name;
    public:
        Pet(string n){
            name = n;
        }
        virtual void MakeSound(){
            cout<<name<<"The Pet says: Shh! Shh!"<<endl;
        }
};

class Cat:public Pet{
    public:
        Cat(string n):Pet(n){ }
        void MakeSound(){
            cout<<name<<"The Cat says: Meow! Meow!"<<endl;
        }
};

class Dog:public Pet{
    public:
        Dog(string n):Pet(n){ }
        void MakeSound(){
            cout<<name<<"The Dog says: Woof! Woof!"<<endl;
        }
};

int main() {
    Pet *a_pet1, *a_pet2;
    Cat *a_cat;
    Dog *a_dog;

    a_pet1 = a_cat = new Cat("Kitty ");
    a_pet2 = a_dog = new Dog("Doggie ");

    a_pet1 -> MakeSound();
    a_cat -> MakeSound();
    static_cast<Pet *>(a_cat) -> MakeSound();

    a_pet2 -> MakeSound();
    a_dog -> MakeSound();
    static_cast<Pet *>(a_dog) -> MakeSound();

    return 0;
}
