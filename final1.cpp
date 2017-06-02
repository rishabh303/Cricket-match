#include<windows.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<ctime>
using namespace std;
class cricket{
public:
    int bat2,bat,bowl1,bowl2;



    friend void main1(void);
    void first_screen(void);
    void eleven(void);
    void startmatch(void);
    void player(void);
    void display(void);
    void player_statistics(void);
    void bowl(string team1,string team2);
    void header(void);
    float over(int balls);
    float sr(int runs,int balls);
    int bound(int four,int six);
    float netrun(int ball,int runs);

};



void cricket :: first_screen(void)
 {  int i;
 time_t now = time(0);
 char* dt = ctime(&now);
 for(i=0;i<14;i++)
{ cout<<"\t\n";
}
cout<<"                                            WELCOME TO INDIA CRICKET"<<"\n";
        Sleep(2000);
cout<<"                                      INDIA VS AUSTRALIA ODI SERIES 2015" <<"\n";
    Sleep(2000);
cout<<"                                                   1st ODI "<<"\n";
     Sleep(2000);
                                        cout<<"\t\t\t\t\t"<<       dt<<"\n";
     Sleep(2000);
cout<<"                                         M.CHINNASWAMY STADIUM ,BANGALORE ";
 }






void cricket::eleven(void)
{ int n;
 cout<<"press 1 for indian team and 2 for australian team\n";
 cin>>n;
 if(n==1)
{
int N=500;
char line[N];
ifstream fin;
fin.open("india.txt");

system("CLS");
while(fin)
{     fin.getline(line,N);
       cout <<line<<"\n";
}
      cout << "coach    Ravi Shastri\n";
fin.close();


}
if (n==2)
{int N=1000;
char line[N];
ifstream fin;
fin.open("australia.txt");

system("CLS");
while(fin)
{     fin.getline(line,N);
       cout <<line<<"\n";

}  cout<< "coach ------ Gary Kirsten\n";
fin.close();
}

 }






void main1()
{  system("CLS");
    cricket c1;
     int a,i;
for(i=0;i<8;i++)
{ cout<<"\t\n";
}
cout<<"                                        1. Playing Elevens\n\n";
cout<<"                                        2. Start the Match\n\n";
cout<<"                                        3. Players Statistics \n\n";
//cout<<"                                        4. Other Information\nn";
cout<<"                                        4. Exit\n";
cout<<" press the valid key to get information\n";
   cin>>a;
if(a<1&&a>5)
 cout<<"You entered wrong key";
else if(a==1||a==2||a==3||a==4)
{  switch(a){
     case 1: c1.eleven();
             break;

case 2: c1.startmatch();
            break;
    case 3: c1.player_statistics();
              break;
   //case 4: c1.other();
        //    break;
     case 4: exit(0);
}}

}



 void cricket :: player_statistics(void)
 {
 int a;
     system("CLS");
   cout<<" press 1 for indain player     and     2 for australian player\n";
         cin>>a;
          if(a==1)
{
int N=500;
char line[N];
ifstream fin;
fin.open("india.txt");

system("CLS");
while(fin)
{     fin.getline(line,N);
       cout <<line<<"\n";
} }
 else if(a==2)
 {    int N=500;
char line[N];
ifstream fin;
fin.open("australia.txt");

system("CLS");
while(fin)
{     fin.getline(line,N);
       cout <<line<<"\n";

 }
 }
 cout<<" enter the player number whose profile you want to see\n";
     string z;
     string m("a");
     string y(".txt");
    cin>>z;
    if (a==2)
        z=z+m;
    z=z+y;
    Sleep(1000);
    int x=500;
char line[x];
ifstream fin;
fin.open(z.c_str());
if ( ! fin) {
                   cout << "Error: Can't open the file ";
                   exit(1);
                }
system("CLS");
while(fin)
{     fin.getline(line,x);
       cout <<line<<"\n";
}
fin.close();
 Sleep(500);
 int n;
 //cout<< " press 1 to go back to main menu and 0 to see another player information\n";
   //cin>>n;
 //   if(n==1)
  //    main1();

    }



void cricket :: startmatch(void){

int i;
char ch;
system("CLS");
cout<<"\n\n\t -----------------------------------------------------------";
for(i=0;i<20;i++)
{
Sleep(100);
cout<<"-";
}
cout<<"|";
Sleep(500);

cout<<setw(20)<<" \n\n\n\n\n\n\n\n\n\n\n\t\t\t INDIA VS AUSTRALIA";
for(i=0;i<20;i++)
{
Sleep(100);
cout<<"-";
}
cout<<"|";
Sleep(500);
cout<<"\n\n\t\t Press 'Y' To Continue And 'N' To Exit : ";
cin>>ch;

if ( ch=='y'||ch=='Y')
player();
else if ( ch=='n'||ch=='N')
exit(0);
system("CLS");
display();
getch();

}


float str1[11],str2[11];
int runs1[11],balls1[11],fours1[11],six1[11],tot1=0,runs2[11],balls2[11],fours2[11],six2[11],tot2=0,wides1[11],noball1[11],byes1[11],wides2[11],noball2[11],byes2[11];
char x[11][20],y[11][20];
char team1[20],team2[20];


void cricket :: player(void)     // function PLAYER
 {
system("CLS");
header();
int i;

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t Enter Name Of Team 1 ( Team Who Won Toss ) : ";
cin>>team1;
cout<<"\n\n Enter Name Of Team 2 : ";
cin>>team2;
system("CLS");
header();
cout<<"\n\n\t\t Enter The Details Of "<<team1<<":-"<<"\n";
cout<<" \n enter the no of batsmen";
cin>>bat;
for(i=0;i<bat;i++)
{
cout<<"\n\n\n\t Enter Name Of Player Number "<<i+1<<" : ";
cin>>x[i];
cout<<"\n\t Enter Runs of "<<x[i]<<" : ";
cin>>runs1[i];
cout<<"\n\t Balls Faced by "<<x[i]<<" : ";
cin>>balls1[i];
cout<<"\n\t Fours"<<" : ";
cin>>fours1[i];
cout<<"\n\t Six"<<" : ";
cin>>six1[i];

str1[i]=sr(balls1[i],runs1[i]);
tot1+=runs1[i];
}
system("CLS");
header();
cout<<"\n\n\t\t Enter The Details Of "<<team2<<"\n";

cout<<"\n enter no. of batsmen";
cin>>bat2;
for(i=0;i<bat2;i++)
{
cout<<"\n\n\n\t Enter Name Of Player Number "<<i+1<<" : ";
cin>>y[i];
cout<<"\n \tEnter Runs of "<<y[i]<<" : ";
cin>>runs2[i];
cout<<"\n\t Balls Faced by "<<y[i]<<" : ";
cin>>balls2[i];
cout<<"\n\t Fours"<<" : ";
cin>>fours2[i];
cout<<"\n\t Six"<<" : ";
cin>>six2[i];
str2[i]=sr(balls2[i],runs2[i]);
tot2+=runs1[i];
}
bowl(team1,team2);

}


char a[11][20],b[11][20];
int wicket1[11],ball1[11],maiden1[11],run1[11],wicket2[11],ball2[11],maiden2[11],run2[11];
float eco1[11],eco2[11],over1[11],over2[11];
void cricket:: bowl(string team1,string team2)
{
int i;
system("CLS");
header();
cout<<"\n Enter The Details of"<<team1<<"\n";
cout<<"enter no of bowlers\n";
cin>>bowl1;
for(i=0;i<bowl1;i++)
{
cout<<"\n\n Enter The Name of Bowler "<<i+1<<" ";
cin>>a[i];
cout<<"\n Wickets : ";
cin>>wicket1[i];
cout<<"\n Balls : ";
cin>>ball1[i];
cout<<"\n Maiden : ";
cin>>maiden1[i];
cout<<"\n Runs Given : ";
cin>>run1[i];
over1[i]=(over(ball1[i]));
eco1[i]=(run1[i]/over1[i]);
}
system("CLS");
header();
cout<<"\n Enter The Details of"<<team2<<"\n";
cout<<" enter no. of bowlers\n";
cin>>bowl2;
for(i=0;i<bowl2;i++)
{
cout<<"\n\n Enter The Name of Bowler "<<i+1<<" ";
cin>>b[i];
cout<<"\n Wickets : ";
cin>>wicket2[i];
cout<<"\n Balls : ";
cin>>ball2[i];
cout<<"\n Maiden : ";
cin>>maiden2[i];
cout<<"\n Runs Given : ";
cin>>run2[i];
over2[i]=over(ball2[i]);
eco2[i]=(run2[i]/over2[i]);
}
}
float cricket::netrun(int ball,int runs)
{
float k,over;
over=ball/6;
k=(runs/over);
return(k);
}
float cricket ::sr(int runs,int balls)
{
float k;
k=((runs/balls)*100);
return(k);
}
int cricket::bound(int four,int six)
{
int k;
k=four+six;
return(k);
}
int extras (int wides,int noballs,int byes)
{
int k;
k=(wides+noballs+byes);
return(k);
}

void cricket:: header ()
{  system("CLS");
cout<<"\n\n\t -----------------------------------------------------------";
cout<<setw(20)<<" \n\n\n\t\t\t INDIA VS AUSTRALIA ";
cout<<"\n\n\t -----------------------------------------------------------";
}

float cricket::over ( int balls )
{ float k;
k=(balls/6);
return(k);
}

void cricket:: display()
{

int i,k,win;
char next;
if(tot1>tot2)
win=0;
else
win=1;
system("CLS");
header();
cout<<"\n<<<<<<"<<team1   <<"VS"<<  team2<<">>>>>>>>>>";
cout<<"\n Toss : "<<team1<<"Won Toss and Elected Batting ";
if(win==0)
cout<<"\n Result : "<< team1<<"wins";
else
cout<<"\n Result : "<< team2<<"wins";
cout<<"\n<<<<<<"<<team1<<">>>>>>>";
cout<<"\n\n Name Runs Balls 4s 6s SR \n\n\n ";
for(i=0;i<bat;i++)
{
cout<<"\n"<<x[i]<<" "<<runs1[i]<<" "<<balls1[i]<<" "<<fours1[i]<<" "<<six1[i]<<" "<<str1[i];
cout<<"\n";
}
cout<<"\n Bowling";
cout<<"\n\n Bowler Over Maiden Wickets Economy";
cout<<"\n";
for(i=0;i<bowl1;i++)
{
cout<<b[i]<<" "<<over2[i]<<" "<<maiden2[i]<<" "<<wicket2[i]<<" "<<eco1[i];
cout<<"\n\n";
}
cout<<"\n\n Enter N to continue to next page";
cin>>next;
if(next=='n'||next=='N')
cout<<"\n<<<<<<"<<team2<<">>>>>>>";
cout<<"\n\n Name Runs Balls 4s 6s SR \n\n\n ";
for(i=0;i<bat2;i++)
{
cout<<"\n"<<y[i]<<" "<<runs2[i]<<" "<<balls2[i]<<" "<<fours2[i]<<" "<<six2[i]<<" "<<str2[i];
cout<<"\n";
}
cout<<"\n Bowling";
cout<<"\n\n Bowler Over Maiden Wickets Economy : ";
cout<<"\n";
for(i=0;i<bowl2;i++)
{
cout<<a[i]<<" "<<over1[i]<<" "<<maiden1[i]<<" "<<wicket1[i]<<" "<<eco2[i];
cout<<"\n\n";
}
getch();
}







  int main(){ int a,i;
  char ch='Y';
          cricket c1;
         c1.first_screen();
            Sleep(5000);
           system("CLS");
             main1();

              cout<<"\n"<<"                 press Y if you want to continue and N for exit\n";
    cin>>ch;
    while(ch=='y'||ch=='Y')
        {

          system("CLS");
          main1();
           cout<<"\n"<<"                 press Y if you want to continue and N for exit\n";
    cin>>ch;}

    if(ch=='n'||ch=='N'){
            system("CLS");
            for(i=0;i<12;i++)
                         cout<<"\n";
                         cout<<"                                                 THANK YOU\n";}
           return 0;}
