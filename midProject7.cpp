#include <iostream>

using namespace std;

float circle(){
    float r;
    cout<<"Area of Circle"<<endl;
    cout<<"Enter Radius: ";
    cin>>r;
    float sum=3.1416*r*r;
    cout<<"Area of circle: "<<sum<<endl;
    return sum;
}

float rectangle(){
    float a,b,sum;
    cout<<"Area of Rctriangle"<<endl;
    cout<<"Enter Length: ";
    cin>>a;
    cout<<"Enter Width: ";
    cin>>b;

    sum=a*b;
    cout<<"Area of Rectriangle: "<<sum<<endl;
    return sum;
}

float triangle(){
    float a,b,sum;
    cout<<"Area of Triangle"<<endl;
    cout<<"Enter land: ";
    cin>>a;
    cout<<"Enter Height: ";
    cin>>b;
    sum=.5*a*b;
    cout<<"Area of Triangle: "<<sum<<endl;
    return sum;
}

float square(){
    float l,sum;
    cout<<"Area of Squire"<<endl;
    cout<<"Enter length: ";
    cin>>l;
    sum=l*l;
    cout<<"Area of Squire: "<<sum<<endl;
    return sum;
}

int main()
{
    int n,i=0;
    cout<<"Welcome to MATH ASISTANT.\nIt will help you to determine area of different geometrical shape"<<endl;
    cout<<"How many problem do you want to solve? ";
    cin>>n;
    float resultF[n];
    string resultS[n];
    while(i<n){
    int option;
    cout<<"Enter your option"<<endl;
    cout<<"1 for area of circle\n2 for area of rectangle\n3 for area of triangle\n4 for area of square\nOption: ";
    cin>>option;
    if(option==1){
        resultS[i] = "Circle";
        resultF[i] = circle();
    }else if(option==2){
        resultS[i] = "Rectangle";
        resultF[i] = rectangle();
    }else if(option==3){
        resultS[i] = "Triangle";
        resultF[i] = triangle();
    }else if(option==4){
        resultS[i] = "Square";
        resultF[i] = square();
    }
      i++;
    }
    cout<<"Your math summary: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"("<<i+1<<") Area of "<<resultS[i]<<" = "<<resultF[i]<<endl;
    }
    cout<<"\nThanks for using MATH ASISTANT!"<<endl;
    return 0;
}
