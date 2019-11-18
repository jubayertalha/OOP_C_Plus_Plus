#include<iostream>
using namespace std;

class Player{
    protected:
        int mAge;
        string mName;
        string mCountry;
    public:
        void setPlayerInfo(string str,int age,string country){
            mName = str;
            mAge = age;
            mCountry = country;
        }
        void showPlayerInfo(){
            cout<<"Name: "<<mName<<" ";
            cout<<"Age: "<<mAge<<" ";
            cout<<"Country: "<<endl;
        }
};

class Footballer:public Player{
    protected:
        int goalScore;
        double scoringAvg;
        string totalNumMatches;
    public:
        void setFootballerInfo(int numOfGoal,double avgGoal,string tMatch){
            goalScore = numOfGoal;
            scoringAvg = avgGoal;
            totalNumMatches = tMatch;
        }
        void showFootballerInfo(){
            showPlayerInfo();
            cout<<"Player Type: Footballer"<<endl;
            cout<<"Total Match Played: "<<totalNumMatches<<endl;
            cout<<"Goal Score = "<<goalScore<<endl;
            cout<<"Scoring Average = "<<scoringAvg<<endl;
        }
};

class Cricketer:public Player{
    protected:
        string playerType;
        string totalNumMatches;
    public:
        void setCricketerInfo(string pType,string tMatch){
            playerType = pType;
            totalNumMatches = tMatch;
        }
        void showCricketerInfo(){
            showPlayerInfo();
            cout<<"Player Type: "<<playerType<<endl;
            cout<<"Total Match Played: "<<totalNumMatches<<endl;
        }
};

class Batsman:public Cricketer{
    protected:
        double runScored;
        double battingAvg;
    public:
        void setBatsmanInfo(double rc,double ba){
            runScored = rc;
            battingAvg = ba;
        }
        void showBatsmanInfo(){
            showCricketerInfo();
            cout<<"Batsman's run = "<<runScored;
            cout<<"Batsman's Average = "<<battingAvg<<endl;
        }
};

class Bowler:public Cricketer{
    protected:
        double wicketTaken;
        double wicketAvg;
    public:
        void setBowlerInfo(double wc,double wAvg){
            wicketTaken = wc;
            wicketAvg = wAvg;
        }
        void showBowlerInfo(){
            showCricketerInfo();
            cout<<"Bowler's total wicket = "<<wicketTaken<<endl;
            cout<<"Bowler's wicket average = "<<wicketAvg<<endl;
        }
};

class Wicketkeeper:public Cricketer{
    protected:
        double noOfStumping;
        double noOfRunout;
        double stumpingAvg;
        double runoutAvg;
    public:
        void setWicketKeeperInfo(double st,double rOut,double sAvg,double rOutAvg){
            noOfStumping = st;
            noOfRunout = rOut;
            stumpingAvg = sAvg;
            runoutAvg = rOutAvg;
        }
        void displayWickerKeeperInfo(){
            showCricketerInfo();
            cout<<"Stumped = "<<noOfStumping<<endl;
            cout<<"Stumping Avg = "<<stumpingAvg<<endl;
            cout<<"Run Out = "<<noOfRunout<<endl;
            cout<<"Run Out average = "<<runoutAvg<<endl;
        }
};

int main(){

    Footballer *p1 = new Footballer();
    p1->setPlayerInfo("Ronaldo", 32,"Portugal");
    p1->setFootballerInfo(120,14.5,"200");
    p1->showFootballerInfo();

    Batsman *p2 = new Batsman();
    p2->setPlayerInfo("Sakib-Al-Hasan",33,"Bangladesh");
    p2->setCricketerInfo("Batsman","330");
    p2->setBatsmanInfo(7665,46.75);
    p2->showBatsmanInfo();

    Bowler *p3 = new Bowler();
    p3->setPlayerInfo("Mustafizur Rahman",23,"Bangladesh");
    p3->setCricketerInfo("Bowler","45");
    p3->setBowlerInfo(110,4.75);
    p3->showBowlerInfo();

    Wicketkeeper *p4 = new Wicketkeeper();
    p4->setPlayerInfo("Mushfiqur Rahim",29,"Bangladesh");
    p4->setCricketerInfo("Wicket Keeper","145");
    p4->setWicketKeeperInfo(45,56,4.7,3.8);
    p4->displayWickerKeeperInfo();

    return 0;

}
