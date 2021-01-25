#include<iostream>
#include<cstring>
using namespace std;

int question_nmb = 0;

class Quize{
    protected:
        string qus;
    public:
        int isCorrect;

        Quize(string qus){
            this->qus = qus;
        }

        virtual void question()=0;
};

class Quize1:public Quize{
    protected:
        float given_ans;
    public:
        float ans;

        Quize1(string qus,float ans):Quize(qus){
            this->ans = ans;
        }

        void question(){
            cout<<"("<<question_nmb+1<<") ";
            cout<<qus<<"\nAns: ";
            cin>>given_ans;
            cout<<endl;
            question_nmb++;
            if(given_ans==ans){
                 isCorrect = 1;
            }else{
                isCorrect = 0;
            }
        }
};

class Quize2:public Quize{
    protected:
        char given_ans[40];
    public:
        char ans[20];

        Quize2(string qus,char ans[]):Quize(qus){
            strcpy(this->ans,ans);
        }

        void question(){
            cout<<"("<<question_nmb+1<<") ";
            cout<<qus<<"\nAns: ";
            cin>>given_ans;
            cout<<endl;
            question_nmb++;
            if(strcmp(given_ans,ans)==0){
                 isCorrect = 1;
            }else{
                isCorrect = 0;
            }
        }
};

class Controller{
    private:
        typedef Quize* QuizePtr;
        QuizePtr * quizes = new QuizePtr[100];
        string user_name;
    public:
        Controller(){
            cout<<"*************************PROGRAMMING QUIZ*****************************"<<endl;
            cout<<"*************************PROGRAMMING QUIZ*****************************"<<endl;
            cout<<"*************************PROGRAMMING QUIZ*****************************"<<endl;
            cout<<"*************************PROGRAMMING QUIZ*****************************"<<endl;
            cout<<"*************************PROGRAMMING QUIZ*****************************"<<endl;
            cout<<"\n\nEnter your name: ";
            getline(cin,user_name);
            cout<<"\nWelcome to Programming Quiz "<<user_name<<"!"<<endl<<endl;
        }

        void question(string qus,float ans){
            Quize *quize = new Quize1(qus,ans);
            quize->question();
            quizes[question_nmb-1] = quize;
        }
        void question(string qus,char ans[]){
            Quize *quize = new Quize2(qus,ans);
            quize->question();
            quizes[question_nmb-1] = quize;
        }
        void result(){
            cout<<endl;
            float corr = 0;
            cout<<"*Section 1*"<<endl;
            for(int i=0;i<15;i++){
                if(i==10){
                    cout<<"\n*Section 2*"<<endl;
                }
                if(quizes[i]->isCorrect){
                    cout<<i+1<<": "<<"Correct"<<endl;
                    corr++;
                }else{
                    if(i>9){
                        cout<<i+1<<": "<<"Wrong...Ans: "<<dynamic_cast<Quize2 *>(quizes[i])->ans<<endl;
                    }else{
                        cout<<i+1<<": "<<"Wrong...Ans: "<<dynamic_cast<Quize1 *>(quizes[i])->ans<<endl;
                    }
                }
            }

            float per = (corr/15.0)*100.0;
            if(per>=50){
                cout<<"\nCongratulation "<<user_name<<". You have passed the quiz.\n\nYour result "<<per<<"%"<<endl<<endl;
            }else{
                cout<<"\nBad luck "<<user_name<<". You have failed the quiz.\n\nYour result "<<per<<"%"<<endl<<endl;
            }

            cout<<"Thank You "<<user_name<<" for your participation!"<<endl;
        }
};

int main(){
    Controller controller;
    string qus;

    cout<<"*Section 1*"<<endl;
    int a,b;
    cout<<"Enter two integer numbers:"<<endl;
    cout<<"int a = ";
    cin>>a;
    cout<<"int b = ";
    cin>>b;
    cout<<endl;
    //1111111111
    qus = "What will be the current value of \'a\' after this two statement below?\na+=1;\na-=1;";
    a+=1;
    a-=1;
    controller.question(qus,a);
    //2222222222
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na=++b;";
    a=++b;
    controller.question(qus,a);
    //33333333333
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na=(int)10/3;";
    a=(int)10/3;
    controller.question(qus,a);
    //44444444444
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na/=3;";
    a/=3;
    controller.question(qus,a);
    //5555555555
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\n++a/=1;";
    ++a/=1;
    controller.question(qus,a);
    //66666666666
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\n++a+=b++;";
    ++a+=b++;
    controller.question(qus,a);
    //777777777777
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na++;";
    a++;
    controller.question(qus,a);
    //88888888888
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\n++a=b;";
    ++a=b;
    controller.question(qus,a);
    //99999999999
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na=b-b+b++;";
    a=b-b+b++;
    controller.question(qus,a);
    //101010101010
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na=(b-b+b++)*(b-b);";
    a=(b-b+b++)*(b-b);
    controller.question(qus,a);

    cout<<"\n*Section 2*"<<endl;
    char favSub[20],hatedSub[20];
    cout<<"Enter two string your favorite & hated subject within 20 characters: "<<endl;
    cout<<"char favSub[20] = ";
    cin>>favSub;
    cout<<"char hatedSub[20] = ";
    cin>>hatedSub;
    cout<<endl;

    //11111111111111111
    qus = "What will be the current value of \'favSub\' after this statement below?\nstrcat(favSub,\"IsLove\");";
    strcat(favSub,"IsLove");
    controller.question(qus,favSub);
    //222222222222
    qus = "Including previous statements what will be the current value of \'favSub\' after this statement below?\nstrcpy(favSub,strcat(hatedSub,\"IsBoring\"));";
    strcpy(favSub,strcat(hatedSub,"IsBoring"));
    controller.question(qus,favSub);
    //33333333333
    qus = "Including previous statements what will be the current value of \'favSub\' after this two statements below?\nhatedSub[0]=\'L\';\nstrcpy(favSub,hatedSub);";
    hatedSub[0]='L';
    strcpy(favSub,hatedSub);
    controller.question(qus,favSub);
    //4444444444444
    qus = "Including previous statements what will be the current value of \'favSub\' after this statement below?\nstrcat(favSub,strcpy(hatedSub,\"T\"));";
    strcat(favSub,strcpy(hatedSub,"T"));
    controller.question(qus,favSub);
    //555555555555
    qus = "Including previous statements what will be the current value of \'favSub\' after this statement below?\nstrrev(strcat(favSub,\"V\"));";
    strrev(strcat(favSub,"V"));
    controller.question(qus,favSub);

    controller.result();

    return 0;
}
