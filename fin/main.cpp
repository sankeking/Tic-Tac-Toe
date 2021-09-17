#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class player
{
public:

    int c,r,l;
    char m[3][3]={
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
    };
    void a();
    void b();
    bool co();
    bool co1();
    void co2();
    void show();
    bool a1();
    bool b1();
    void play();
    void computer();
    void init();

};
void player::a()
{
    do
    {
    cout<<"Please player 1 enter the location where you want to draw: ";
    cin>>c;
    r=(c-1)/3;
    l=(c-1)%3;

    if(c<1||c>9||m[r][l]=='X'||m[r][l]=='O')
    {
    cout<<"This location cannot be entered, please re-enter";
    cout<<endl;
    }
    else
    {
    m[r][l]='O';
    return;
    }
    }while(c<1||c>9||m[r][l]=='X'||m[r][l]=='O');
}
void player::b()
{
    do
    {
    cout<<"Please player 2 enter the location where you want to draw: ";
    cin>>c;
    r=(c-1)/3;
    l=(c-1)%3;

    if(c<1||c>9||m[r][l]=='X'||m[r][l]=='O')
    {
    cout<<"This location cannot be entered, please re-enter";
    cout<<endl;
    }
    else
    {
    m[r][l]='X';
    return;
    }
    }while(c<1||c>9||m[r][l]=='X'||m[r][l]=='O');
}
bool player::co()
{
    if((m[0][1]=='O'&&m[0][2]=='O'&&m[0][0]!='X')||(m[1][0]=='O'&&m[2][0]=='O'&&m[0][0]!='X')||(m[1][1]=='O'&&m[2][2]=='O'&&m[0][0]!='X'))
    {
        c=1;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[0][0]=='O'&&m[0][2]=='O'&&m[0][1]!='X')||(m[1][1]=='O'&&m[2][1]=='O'&&m[0][1]!='X'))
    {
        c=2;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[0][0]=='O'&&m[0][1]=='O'&&m[0][2]!='X')||(m[1][1]=='O'&&m[2][0]=='O'&&m[0][2]!='X')||(m[1][2]=='O'&&m[2][2]=='O'&&m[0][2]!='X'))
    {
        c=3;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[1][0]=='O'&&m[1][1]=='O'&&m[1][2]!='X')||(m[0][2]=='O'&&m[2][2]=='O'&&m[1][2]!='X'))
    {
        c=6;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[1][0]=='O'&&m[1][2]=='O'&&m[1][1]!='X')||(m[0][2]=='O'&&m[2][0]=='O'&&m[1][1]!='X')||(m[0][1]=='O'&&m[2][1]=='O'&&m[1][1]!='X')||(m[0][0]=='O'&&m[2][2]=='O'&&m[1][1]!='X'))
    {
        c=5;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[1][1]=='O'&&m[1][2]=='O'&&m[1][0]!='X')||(m[0][0]=='O'&&m[2][0]=='O'&&m[1][0]!='X'))
    {
        c=4;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[2][0]=='O'&&m[2][1]=='O'&&m[2][2]!='X')||(m[0][2]=='O'&&m[1][2]=='O'&&m[2][2]!='X')||(m[0][0]=='O'&&m[1][1]=='O'&&m[2][2]!='X'))
    {
        c=9;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[2][0]=='O'&&m[2][2]=='O'&&m[2][1]!='X')||(m[0][1]=='O'&&m[1][1]=='O'&&m[2][1]!='X'))
    {
        c=8;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[2][1]=='O'&&m[2][2]=='O'&&m[2][0]!='X')||(m[0][0]=='O'&&m[1][0]=='O'&&m[2][0]!='X')||(m[0][2]=='O'&&m[1][1]=='O'&&m[2][0]!='X'))
    {
        c=7;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    return false;

}
bool player::co1()
{

    if((m[0][1]=='X'&&m[0][2]=='X'&&m[0][0]!='O')||(m[1][0]=='X'&&m[2][0]=='X'&&m[0][0]!='O')||(m[1][1]=='X'&&m[2][2]=='X'&&m[0][0]!='O'))
    {
        c=1;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[0][0]=='X'&&m[0][2]=='X'&&m[0][1]!='O')||(m[1][1]=='X'&&m[2][1]=='X'&&m[0][1]!='O'))
    {
        c=2;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[0][0]=='X'&&m[0][1]=='X'&&m[0][2]!='O')||(m[1][2]=='X'&&m[2][2]=='X'&&m[0][2]!='O')||(m[1][1]=='X'&&m[2][0]=='X'&&m[0][2]!='O'))
    {
        c=3;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;

    }
    if((m[1][0]=='X'&&m[1][1]=='X'&&m[1][2]!='O')||(m[0][2]=='X'&&m[2][2]=='X'&&m[1][2]!='O'))
    {
        c=6;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[1][0]=='X'&&m[1][2]=='X'&&m[1][1]!='O')||(m[0][1]=='X'&&m[2][1]=='X'&&m[1][1]!='O')||(m[0][2]=='X'&&m[2][0]=='X'&&m[1][1]!='O')||(m[0][0]=='X'&&m[2][2]=='X'&&m[1][1]!='O'))
    {
        c=5;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[1][1]=='X'&&m[1][2]=='X'&&m[1][0]!='O')||(m[0][0]=='X'&&m[2][0]=='X'&&m[1][0]!='O'))
    {
        c=4;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[2][0]=='X'&&m[2][1]=='X'&&m[2][2]!='O')||(m[0][2]=='X'&&m[1][2]=='X'&&m[2][2]!='O')||(m[0][0]=='X'&&m[1][1]=='X'&&m[2][2]!='O'))
    {
        c=9;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[2][0]=='X'&&m[2][2]=='X'&&m[2][1]!='O')||(m[0][1]=='X'&&m[1][1]=='X'&&m[2][1]!='O'))
    {
        c=8;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    if((m[2][1]=='X'&&m[2][2]=='X'&&m[2][0]!='O')||(m[0][0]=='X'&&m[1][0]=='X'&&m[2][0]!='O')||(m[0][2]=='X'&&m[1][1]=='X'&&m[2][0]!='O'))
    {
        c=7;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return true;
    }
    return false;
}
void player::co2()
{
    cout<<endl;
    cout<<"Computer round";
    if(co1()==true)
        return;
    if(co()==true)
        return;
    else
    {
    if(m[1][1]=='X'||m[1][1]=='O')
    {
      do{
        srand((int)time(NULL));
        c=rand()%9+1;
        r=(c-1)/3;
        l=(c-1)%3;
    if(c<1||c>9||m[r][l]=='X'||m[r][l]=='O')
        cout<<"";
    else
        {
        m[r][l]='X';
        return;
        }

      }while(c<1||c>9||m[r][l]=='X'||m[r][l]=='O');
    }

    if(m[1][1]!='O')
    {
        c=5;
        r=(c-1)/3;
        l=(c-1)%3;
        m[r][l]='X';
        return;
    }
    }
}
bool player::a1()
{
    if(
         (m[0][0]=='O'&&m[0][1]=='O'&&m[0][2]=='O')
       ||(m[1][0]=='O'&&m[1][1]=='O'&&m[1][2]=='O')
       ||(m[2][0]=='O'&&m[2][1]=='O'&&m[2][2]=='O')
       ||(m[0][0]=='O'&&m[1][0]=='O'&&m[2][0]=='O')
       ||(m[0][1]=='O'&&m[1][1]=='O'&&m[2][1]=='O')
       ||(m[0][2]=='O'&&m[1][2]=='O'&&m[2][2]=='O')
       ||(m[0][0]=='O'&&m[1][1]=='O'&&m[2][2]=='O')
       ||(m[0][2]=='O'&&m[1][1]=='O'&&m[2][0]=='O')
      )

        return true;
    else
        return false;

}
bool player::b1()
{
    if(
         (m[0][0]=='X'&&m[0][1]=='X'&&m[0][2]=='X')
       ||(m[1][0]=='X'&&m[1][1]=='X'&&m[1][2]=='X')
       ||(m[2][0]=='X'&&m[2][1]=='X'&&m[2][2]=='X')
       ||(m[0][0]=='X'&&m[1][0]=='X'&&m[2][0]=='X')
       ||(m[0][1]=='X'&&m[1][1]=='X'&&m[2][1]=='X')
       ||(m[0][2]=='X'&&m[1][2]=='X'&&m[2][2]=='X')
       ||(m[0][0]=='X'&&m[1][1]=='X'&&m[2][2]=='X')
       ||(m[0][2]=='X'&&m[1][1]=='X'&&m[2][0]=='X')
      )

        return true;
    else
        return false;

}
void player::show()
{
    cout<<endl;
    cout<<"-------";
    cout<<endl;
    cout<<"|"<<m[0][0]<<"|"<<m[0][1]<<"|"<<m[0][2]<<"|";
    cout<<endl;
    cout<<"-------";
    cout<<endl;
    cout<<"|"<<m[1][0]<<"|"<<m[1][1]<<"|"<<m[1][2]<<"|";
    cout<<endl;
    cout<<"-------";
    cout<<endl;
    cout<<"|"<<m[2][0]<<"|"<<m[2][1]<<"|"<<m[2][2]<<"|";
    cout<<endl;
    cout<<"-------";
    cout<<endl;
    }
void player::init()
{
    m[0][0]='1';
    m[0][1]='2';
    m[0][2]='3';
    m[1][0]='4';
    m[1][1]='5';
    m[1][2]='6';
    m[2][0]='7';
    m[2][1]='8';
    m[2][2]='9';

    cout<<endl;
    cout<<"-------";
    cout<<endl;
    cout<<"|"<<m[0][0]<<"|"<<m[0][1]<<"|"<<m[0][2]<<"|";
    cout<<endl;
    cout<<"-------";
    cout<<endl;
    cout<<"|"<<m[1][0]<<"|"<<m[1][1]<<"|"<<m[1][2]<<"|";
    cout<<endl;
    cout<<"-------";
    cout<<endl;
    cout<<"|"<<m[2][0]<<"|"<<m[2][1]<<"|"<<m[2][2]<<"|";
    cout<<endl;
    cout<<"-------";
    cout<<endl;

}
void player::play()
{
    int j=0;
    for(int i=0;i<8;i++)
    {
    a();
    a1();
    show();
    if(a1()==true)
    {
        cout<<"Player 1 win"<<endl;
        break;
    }
    j++;
    if(j>4)
    {
        cout<<"Flat"<<endl;
        break;
    }
    b();
    b1();
    show();
    if(b1()==true)
    {
        cout<<"Player 2 win"<<endl;
        break;
    }
    }
}
void player::computer()
{
        int j=0;
    for(int i=0;i<8;i++)
    {
    a();
    a1();
    show();
    if(a1()==true)
    {
        cout<<"Player 1 win"<<endl;
        break;
    }
    j++;
    if(j>4)
    {
        cout<<"Flat"<<endl;
        break;
    }
    co2();
    b1();
    show();
    if(b1()==true)
    {
        cout<<"Computer win"<<endl;
        break;
    }
    }
}
int main()
{
    player g;
    int s;
    char ans;
    do{
    cout<<endl;
    cout<<"1.player 1 v.s player 2"<<endl;
    cout<<"2.player 1 v.s computer"<<endl;
    cout<<"3.End"<<endl;
    cout<<endl;
    cout<<"Please enter the number selection function : ";

    cin>>s;
    if(s==1)
        {
        g.init();
        cout<<"player 1 is 'O' , player 2 is 'X'"<<endl;
        cout<<endl;
        g.play();
        cout<<endl;
        cout<<"continue play? y/n : ";
        cin>>ans;
        if(ans=='N'||ans=='n')
            break;
        }
    if(s==2)
        {
        g.init();
        cout<<"player 1 is 'O' , computer is 'X'"<<endl;
        cout<<endl;
        g.computer();
        cout<<endl;
        cout<<"continue play? y/n : ";
        cin>>ans;
        if(ans=='N'||ans=='n')
            break;
        }
    if(s==3)
        break;
    if(s==0||s>3)
    {
        cout<<endl;
        cout<<"No this function"<<endl;
        cout<<endl;
    }

    }while(0<s<=3);

    return 0;
}
