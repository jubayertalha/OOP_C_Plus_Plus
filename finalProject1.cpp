#include<iostream>
#include<algorithm>
using namespace std;

class Course{
    private:
        string name;
        int id;
        int credit;
    public:
        Course(){}
        Course(string name,int id,int credit){
            this-> name = name;
            this-> id = id;
            this-> credit = credit;
        }
        int getCourseId(){
            return id;
        }
        void display(){
            cout<<"Course Name: "<<name<<"\t";
            cout<<"Course Id: "<<id<<"\t";
            cout<<"Course Credit: "<<credit<<endl;
        }
};

class StudentData{
    protected:
        string studentName;
        int studentId;
        string studentEmail;
    public:
        StudentData(string studentName,int studentId,string studentEmail){
            this->studentName = studentName;
            this->studentId = studentId;
            this->studentEmail = studentEmail;
        }
        virtual void display()=0;
        virtual void addCourse()=0;
        virtual void dropCourse()=0;
        virtual int checkPass(int pass)=0;
        int getStudentId(){
            return studentId;
        }
};

class Student:public StudentData{
    private:
        int passCode;
        Course courses[100];
        int totalCourses;
    public:
        Student(string studentName,int studentId,string studentEmail,int passCode):StudentData(studentName,studentId,studentEmail){
            this->passCode = passCode;
            totalCourses = 0;
        }
        void display(){
            cout<<"Student Name: "<<studentName<<endl;
            cout<<"Student Id: "<<studentId<<endl;
            cout<<"Student Email: "<<studentEmail<<endl;
            cout<<"Courses:"<<endl;
            if(totalCourses!=0){
                for(int i=0;i<totalCourses;i++){
                    cout<<"\t("<<i+1<<") ";
                    courses[i].display();
                    cout<<"\n";
                }
            }else{
                cout<<"\tThere is no course"<<endl;
            }
        }
        void addCourse(){
            string name;
            int id;
            int credit;
            cout<<"Enter Course Name: ";
            cin>>name;
            cout<<"Enter Course Id: ";
            cin>>id;
            cout<<"Enter Credit: ";
            cin>>credit;
            cout<<"Course Added Successfully"<<endl;
            courses[totalCourses] = Course(name,id,credit);
            totalCourses++;
        }
        void dropCourse(){
            if(totalCourses!=0){
                int id;
                cout<<"Enter Course Id: ";
                cin>>id;
                Course newCourses[100];
                int newI=0;
                for(int i=0;i<totalCourses;i++){
                    if(courses[i].getCourseId()!=id){
                        newCourses[newI] = courses[i];
                        newI++;
                    }
                }
                if(newI==totalCourses){
                    cout<<"Didn't find this course"<<endl;
                }else{
                    cout<<"Course dropped successfully"<<endl;
                }
                totalCourses = newI;
                for(int i=0;i<totalCourses;i++){
                    courses[i] = newCourses[i];
                }
            }else{
                cout<<"There is no course"<<endl;
            }
        }
        int checkPass(int pass){
            if(this->passCode==pass) return 1;
            else return 0;
        }
};



int main(){
    typedef StudentData * StudentPtr;
    StudentPtr * students = new StudentPtr[100];
    int totalStudent = 0;
    cout<<"Welcome"<<endl;
    int option;
    while(1){
        cout<<"1 -> Add Student\n2 -> Login\n0 -> Exit\nOption: ";
        cin>>option;
        if(option==1){
            cout<<"Enter Student Name: ";
            string name;
            cin>>name;
            cout<<"Enter Student Id: ";
            int id;
            cin>>id;
            cout<<"Enter Student Email: ";
            string email;
            cin>>email;
            cout<<"Enter Student Pass(Numbers): ";
            int pass;
            cin>>pass;
            students[totalStudent] = new Student(name,id,email,pass);
            totalStudent++;
            cout<<"Student added successfully"<<endl;
        }else if(option==2){
            cout<<"Enter Student Id: ";
            int id;
            cin>>id;
            cout<<"Enter Student Pass: ";
            int pass;
            cin>>pass;
            int credential=0;
            int studentNo;
            for(int i=0;i<totalStudent;i++){
                if(students[i]->getStudentId()==id){
                    if(students[i]->checkPass(pass)){
                        credential = 1;
                        studentNo = i;
                        cout<<"Login Successfully"<<endl;
                        break;
                    }
                }
            }
            if(credential){
                credential = 0;
                while(1){
                    cout<<"1 -> Student Info\n2 -> Add Course\n3 -> Drop Course\n0 -> Back\nOption: ";
                    cin>>option;
                    if(option==1){
                        students[studentNo]->display();
                    }else if(option==2){
                        students[studentNo]->addCourse();
                    }else if(option==3){
                        students[studentNo]->dropCourse();
                    }else if(option==0){
                        break;
                    }else{
                        cout<<"Invalid Option"<<endl;
                    }
                }
            }else{
                cout<<"Id or Pass is incorrect"<<endl;
            }
        }else if(option==0){
            break;
        }else{
            cout<<"Invalid Option"<<endl;
        }
    }
    cout<<"Thank You";
    return 0;
}
