#include<iostream>
using namespace std;

class Area{
    protected:
        float width,length,radius,base,height,area;
        string name;
    public:
        Area(float length,string name){
            this -> length = length;
            this -> radius = length;
            this -> name = name;
        }
        Area(float length,float width,string name){
            this -> length = length;
            this -> width = width;
            this -> base = length;
            this -> height = width;
            this -> name = name;
        }

        virtual void CalculateArea()=0;
};

class Rectangle: public Area{
    public:
        Rectangle(float length,float width,string name):Area(length,width,name){}

        void CalculateArea (){
            area=width*length;
            cout<<"Area of "<<name<<" = "<<area<<endl;
        }
};

class Square: public Area {
    public:
        Square(float length,string name):Area(length,name){}

        void CalculateArea(){
            area=length*length;
            cout<<"Area of "<<name<<" = "<<area<<endl;
        }
};

 class Triangle:public Area{
    public:
        Triangle(float base,float height,string name):Area(base,height,name){}

        void CalculateArea(){
            area=0.5*base*height;
            cout<<"Area of "<<name<<" = "<<area<<endl;
        }
 };

 class Circle:public Area{
   public:
       Circle (float radius,string name):Area(radius,name){}

       void CalculateArea(){
           area=3.1416*radius*radius;
           cout<<"Area of "<<name<<" = "<<area<<endl;
       }
};

int main(){
    typedef Area* AreaPtr;
    AreaPtr * areas = new AreaPtr[100];
    Area *area;
    int i=0;
    cout<<"Welcome to MATH ASISTANT.\nIt will help you to determine area of different Geometrical Shape"<<endl;
    while(1){
        int option,exitOption=-1;
        cout<<"Enter your option"<<endl;
        cout<<"1 for area of Circle\n2 for area of Rectangle\n3 for area of Triangle\n4 for area of Square\n0 to Exit\nOption: ";
        cin>>option;
        switch(option){
            case 1:
                float radius;
                cout<<"Area of Circle"<<endl;
                cout<<"Enter Radius: ";
                cin>>radius;
                area = new Circle(radius,"Circle");
                area -> CalculateArea();
                areas[i] = area;
                i++;
                break;
            case 2:
                float length,width;
                cout<<"Area of Rectangle"<<endl;
                cout<<"Enter Length: ";
                cin>>length;
                cout<<"Enter Width: ";
                cin>>width;
                area = new Rectangle(length,width,"Rectangle");
                area -> CalculateArea();
                areas[i] = area;
                i++;
                break;
            case 3:
                float base,heigth;
                cout<<"Area of Triangle"<<endl;
                cout<<"Enter Base: ";
                cin>>base;
                cout<<"Enter Height: ";
                cin>>heigth;
                area = new Triangle(base,heigth,"Triangle");
                area -> CalculateArea();
                areas[i] = area;
                i++;
                break;
            case 4:
                cout<<"Area of Squire"<<endl;
                cout<<"Enter Length: ";
                cin>>length;
                area = new Square(length,"Square");
                area -> CalculateArea();
                areas[i] = area;
                i++;
                break;
            case 0:
                cout<<"Do you want to see your Summary or want to Exit?\nEnter 1 for Summary\nEnter 0 to Exit\nEnter: ";
                cin>>exitOption;
                if(exitOption==1){
                    cout<<"Your Math Summary: "<<endl;
                    for(int j=0;j<i;j++){
                        cout<<"("<<j+1<<") ";
                        areas[j]->CalculateArea();
                    }
                    break;
                }else if(exitOption==0){
                    break;
                }else{
                    cout<<"Invalid Option"<<endl;
                    break;
                }
            default:
                cout<<"Invalid Option"<<endl;
        }
        if(exitOption==0||exitOption==1){
            break;
        }
    }
    cout<<"\nThanks for using MATH ASISTANT!"<<endl;
    return 0;
}
