
#include <time.h>
#include <iostream>

using namespace std;
int m [10][10];
int i,i1=0,i2=0,j,j1=0,j2=0,k,loc2,a1,a2,o1,o2;
int access1=0,access2=0,loop1=0,loop2=0,loc1;

int random()
{
srand(time(0));
return rand()%6+1;
}

int main()
{
    for (i=0;i<10;i++)//initial the matrix
        for(j=0;j<10;j++)
    m[i][j]=k++;

     while(1){//repeating game loop

    if(access1==0){// access permision for enter to game for player 1
    cout<<"player 1 press 1 to make dice to enter : ";
    cin >>a1;

    if(a1==1){

    o1=random();//random number function

    cout<<"*****num1=%d*****\n\n"<<o1;

    if(o1==6){
    access1=1;
    cout<<"you enter to game...well come...\nlocation1=%d\n\n",m[i1][j1]);
    loop1=1;
    }
    }
    }
    if(access2==0&&o1!=6){// access permision for enter to game for player 2
    cout<<"player 2 press 2 to make dice to enter : ";
    cin>>a2;

    if(a2==2){

    o2=random();

    cout<<"*****num2=%d*****\n\n"<<o2;
    if(o2==6){
    access2=1;
    cout<<"you enter to game...well come...\nlocation2=%d\n\n"<<m[i2][j2];
    loop2=1;
    }
    }
    }


    if(access1==1&&o2!=6){//enter condition
    while(loop1){//enter loop

    cout<<"player 1 press 1 to make dice :";
    cin>>a1;

    if(a1==1){

    o1=random();

    cout<<"*****num1= %d*****\n"<<o1;

        if (loc2+o2>=100)
    {
     o2=0;
     cout<<"+++++++++++number is big to end+++++++++++";
    }
    for(i=0;i<o1;i++){//counter loop
        if(j1==9)
       {
        j1=0;
        i1=i1+1;
       }
     j1=j1+1;
    }
    loc1=m[i1][j1];
    cout<<"location1=%d\n\n"<<loc1;

     if(loc1==loc2){//crash condition
    i2=0;
    j2=0;
    loc2=m[i2][j2];
     cout<<"oh pleyer 2 crashed.....location2=%d\n\n"<<loc2;
    }
    switch(loc1){
    case 19: {//ladder condition
        loc1=42;
        cout<<"climb from ladder 19------>>42 location1=%d\n\n"<<loc1;break;}
    case 46:{//ladder condition
        loc1=70;
        cout<<"climb from ladder 46------>>70 location1=%d\n\n"<<loc1;break;}
    case 61:{//ladder condition
        loc1=78;
        cout<<"climb from ladder 61------>>78 location1=%d\n\n"<<loc1;break;}
    case 69:{//ladder condition
        loc1=87;
        cout<<"climb from ladder 69------>>87 location1=%d\n\n"<<loc1;break;}
    case 92:{//snake condition
        loc1=74;
        cout<<"fall from snake 7<<------92 location1=%d\n\n"<<loc1;break;}
    case 78:{//snake condition
        loc1=55;
        cout<<"fall from snake 55<<------78 location1=%d\n\n"<<loc1;break;}
    case 48:{//snake condition
        loc1=29;
        cout<<"fall from snake 29<<------48 location1=%d\n\n"<<loc1;break;}
    case 18:{//snake condition
        loc1=7;
        cout<<"fall from snake 7<<------18 location1=%d\n\n"<<loc1;break;}
    }
     if(o1!=6)//happen 6 number condition
        break;
        else
        cout<<"!!!!!!!! once more chance !!!!!!!!!!!\n";
    }
    }
    }
    if(access2==1){//enter condition
    while(loop2){//repet loop
    cout<<"player 2 press 2 to make dice :";
    cin>>a2;
    if(a2==2){

   o2=random();

    cout<<"*****num2= %d*****\n\n"<<o2;

    if (loc2+o2>=100)//end game condition
    {
     o2=0;
     cout<<"<<<<<<<<<<<<< number is big to end >>>>>>>>>>>>>>>";
    }

    for(i=0;i<o2;i++){//counter loop
        if(j2==9)
        {
        j2=0;
        i2=i2+1;
       }
        j2=j2+1;
      }
     loc2=m[i2][j2];
        cout<<"location2=%d\n\n"<<loc2;

     if(loc2==loc1){//crash condition
    i1=0;
    j1=0;
    loc1=m[i1][j1];
     cout<<"oh pleyer 1 crashed.....location2=%d\n\n"<<loc2;
    }

    switch(loc2){
    case 19:{//ladder condition
        loc2=42;
        cout<<"climb from ladder 19------>>42 location2=%d\n\n"<<loc1;break;}
    case 46 :{//ladder condition
        loc2=70;
        cout<<"climb from ladder 46------>>70 location2=%d\n\n"<<loc1;break;}
    case 61:{//ladder condition
        loc2=78;
        cout<<"climb from ladder 61------>>78 location2=%d\n\n"<<loc1;break;}
    case 69:{//ladder condition
        loc2=87;
        cout<<"climb from ladder 69------>>87 location2=%d\n\n"<<loc1;break;}
    case 92:{//snake condition
        loc2=74;
        cout<<"fall from snake 74<<------92 location2=%d\n\n"<<loc1;break;}
    case 78:{//snake condition
        loc2=55;
        cout<<"fall from snake 55<<------78 location2=%d\n\n"<<loc1;break;}
    case 48:{//snake condition
        loc2=29;
        cout<<"fall from snake 29<<------48 location2=%d\n\n"<<loc1;break;}
    case 18:{//snake condition
        loc2=7;
        cout<<"fall from snake 74<<------18 location2=%d\n\n"<<loc1;break;}

    }
    if(o2!=6)//happen 6 number condition
        break;
    else
        cout<<"!!!!!!!!!! once more chance !!!!!!!!!!\n";
     }
     }
     }
    }}
