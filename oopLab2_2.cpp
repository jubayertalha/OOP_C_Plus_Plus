#include<iostream>
using namespace std;

class ShapeAreaCalc{
    private:
        float length,width,rad,areaRec,areaCir;
    public:
        int opt;
        ShapeAreaCalc(){}
        ShapeAreaCalc(int l,int w,int r){
            length = l;
            width = w;
            rad = r;
        }
        void getparameter(){
            cout<<"Welcome to ShapeAreaCalculator program\nSelect the shape from the Option Below\n1 = Rectangle\n2 = Circle\nEnter Choice\n";
            cin>>opt;
            if(opt==1){
                cout<<"Thanks for selecting the Rectangle\nEnter Length & Breadth\n";
                cin>>length;
                cin>>width;
            }else if(opt==2){
                cout<<"Thanks for selecting the Circle\nEnter Radius\n";
                cin>>rad;
            }
        }
        float RectArea(){
            areaRec = length*width;
            return areaRec;
        }
        float CircArea(){
            areaCir = 3.1416*rad*rad;
            return areaCir;
        }
        void DisplayRectArea(){
            cout<<"Area of Rectangle = "<<areaRec<<endl;
        }
        void DisplayCircArea(){
            cout<<"Area of Circle = "<<areaCir<<endl;
        }
};

int main(){
    ShapeAreaCalc obj1,obj2;
    obj1.getparameter();
    if(obj1.opt==1){
        obj1.RectArea();
        obj1.DisplayRectArea();
    }else if(obj1.opt==2){
        obj1.CircArea();
        obj1.DisplayCircArea();
    }

    obj2.getparameter();
    if(obj2.opt==1){
        obj2.RectArea();
        obj2.DisplayRectArea();
    }else if(obj2.opt==2){
        obj2.CircArea();
        obj2.DisplayCircArea();
    }

    return 0;
}

