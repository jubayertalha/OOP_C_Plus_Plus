#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
using namespace std;

struct student{
    char name[100];
    int student_id;
    char contact[100];
    char email[100];
    char programe[100];
    char department[100];
}p[10];

int main(){
  int i,b,d;
  char f[20];
  jumpe:
  for(i=1;;)
  {
      cout<<"\nThe students record system application\n1-To enter the data\n2-To read the data\n3-To save the data\n";
      cin>>d;
      switch(d){
          case 1:
            cout << "enter the no of student's to get the data:" << endl;
            cin>>b;
            for(i=1;i<=b;++i){
             cout<<"\n enter the name of the student:\n";
             cin>>p[i].name;
             cout<<"\n enter the id no of the student_id:\n";
             cin>>p[i].student_id;
             cout<<"\n enter  the contact:\n";
             cin>>p[i].contact;
             cout<<"\n enter the email:\n";
             cin>>p[i].email;
             cout<<"\n enter the  programe:\n";
             cin>>p[i].programe;
             cout<<"\nenter the  department:\n";
             cin>>p[i].department;
            }
            goto jumpe;
          case 2:
             for(i=1;i<=b;++i){
                cout<<"\nThe "<<i<<" name is "<<p[i].name<<" with id no "<<p[i].student_id<<" departmant "<<p[i].department<<"\n";
             }
             goto jumpe;
          case 3:
             ofstream file;
             file.open ("midProject1.txt");
             for(i=1;i<=b;++i)
             {
              file <<"\nThe "<<i<<" name is "<<p[i].name<<" with id no "<<p[i].student_id<<" departmant "<<p[i].department<<"\n";
             }
             file.close();
             cout<<"the file is saved";
             getch();
             goto jumpe;
      }
   }
   return 0;
}
