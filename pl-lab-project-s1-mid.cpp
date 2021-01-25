#include<iostream>
#include<cstring>
using namespace std;

string user_name;
int question1_nmb = 0;
int question2_nmb = 0;
float record1[10][2];
char record2[5][2][40];
float corr = 0;

void question1(string qus,float ans);
void question2(string qus,char ans[]);
void result();

int main(){
    int a,b;
    string qus;

    cout<<"*************************PROGRAMMING QUIZ*****************************"<<endl;
    cout<<"\n\nEnter your name: ";
    getline(cin,user_name);
    cout<<"\nWelcome to Programming Quiz "<<user_name<<"!"<<endl<<endl;
    cout<<"*Section 1*"<<endl;
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
    question1(qus,a);
    //2222222222
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na=++b;";
    a=++b;
    question1(qus,a);
    //33333333333
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na=(int)10/3;";
    a=(int)10/3;
    question1(qus,a);
    //44444444444
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na/=3;";
    a/=3;
    question1(qus,a);
    //5555555555
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\n++a/=1;";
    ++a/=1;
    question1(qus,a);
    //66666666666
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\n++a+=b++;";
    ++a+=b++;
    question1(qus,a);
    //777777777777
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na++;";
    a++;
    question1(qus,a);
    //88888888888
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\n++a=b;";
    ++a=b;
    question1(qus,a);
    //99999999999
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na=b-b+b++;";
    a=b-b+b++;
    question1(qus,a);
    //101010101010
    qus = "Including previous statements what will be the current value of \'a\' after this statement below?\na=(b-b+b++)*(b-b);";
    a=(b-b+b++)*(b-b);
    question1(qus,a);

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
    question2(qus,favSub);
    //222222222222
    qus = "Including previous statements what will be the current value of \'favSub\' after this statement below?\nstrcpy(favSub,strcat(hatedSub,\"IsBoring\"));";
    strcpy(favSub,strcat(hatedSub,"IsBoring"));
    question2(qus,favSub);
    //33333333333
    qus = "Including previous statements what will be the current value of \'favSub\' after this two statements below?\nhatedSub[0]=\'L\';\nstrcpy(favSub,hatedSub);";
    hatedSub[0]='L';
    strcpy(favSub,hatedSub);
    question2(qus,favSub);
    //4444444444444
    qus = "Including previous statements what will be the current value of \'favSub\' after this statement below?\nstrcat(favSub,strcpy(hatedSub,\"T\"));";
    strcat(favSub,strcpy(hatedSub,"T"));
    question2(qus,favSub);
    //555555555555
    qus = "Including previous statements what will be the current value of \'favSub\' after this statement below?\nstrrev(strcat(favSub,\"V\"));";
    strrev(strcat(favSub,"V"));
    question2(qus,favSub);

    result();

    return 0;
}

void result(){
    cout<<endl;
    float per = (corr/15.0)*100.0;
    if(per>=50)
        cout<<"Congratulation "<<user_name<<". You have passed the quiz.\n\nYour result "<<per<<"%"<<endl<<endl;
    else
        cout<<"Bad luck "<<user_name<<". You have failed the quiz.\n\nYour result "<<per<<"%"<<endl<<endl;

    cout<<"*Section 1*"<<endl;
    for(int i=0;i<10;i++){
        if(record1[i][0]==1)
            cout<<i+1<<": "<<"Correct"<<endl;
        else
            cout<<i+1<<": "<<"Wrong...Ans: "<<record1[i][1]<<endl;
    }

    cout<<"\n*Section 2*"<<endl;
    for(int i=0;i<5;i++){
        if(record2[i][0][0]=='1')
            cout<<i+1<<": "<<"Correct"<<endl;
        else
            cout<<i+1<<": "<<"Wrong...Ans: "<<record2[i][1]<<endl;
    }

    cout<<"\nThank You "<<user_name<<" for your participation!"<<endl;

}

void question1(string qus,float ans){
    cout<<"("<<question1_nmb+1<<") ";
    cout<<qus<<"\nAns: ";
    float given_ans;
    cin>>given_ans;
    cout<<endl;
    if(given_ans==ans){
        record1[question1_nmb][0] = 1;
        record1[question1_nmb][1] = 0;
        corr++;
    }else{
        record1[question1_nmb][0] = 0;
        record1[question1_nmb][1] = ans;
    }
    question1_nmb++;
}

void question2(string qus,char ans[]){
    cout<<"("<<question2_nmb+1<<") ";
    cout<<qus<<"\nAns: ";
    char given_ans[40];
    cin>>given_ans;
    cout<<endl;
    if(strcmp(given_ans,ans)==0){
        record2[question2_nmb][0][0] = '1';
        record2[question2_nmb][1][0] = '0';
        corr++;
    }else{
        record2[question2_nmb][0][0] = '0';
        strcpy(record2[question2_nmb][1],ans);
    }
    question2_nmb++;
}
