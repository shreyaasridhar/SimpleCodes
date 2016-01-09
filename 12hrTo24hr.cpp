#include<iostream>
using namespace std;
class t12
{
int t,hrs,mins;
public:
    t12()
    {t=0;hrs=0;mins=0;}

    t12(int p,int q,int r)
    {t=p;hrs=q;mins=r;}

    void display()
    {
        cout<<"\n The time in 12hr format is :";
        if(mins=60)
        {
            hrs+=1;
            mins=0;
        }
        cout<<hrs<<":"<<mins;
        if(t=0) cout<<" a.m";
        if(t=1) cout<<" p.m";
    }
};
class t24
{
int hh,mm,ss;
public:
    t24()
    {mm=0;hh=0;ss=0;}

    t24(int p,int q,int r)
    {hh=p;mm=q;ss=r;}

    void display()
    {
        cout<<"\n The time in 24hr format is :";
        if(mm=60)
        {
            hh+=1;
            mm=0;
        }
        cout<<hh<<":"<<mm<<":"<<ss;
    }

    operator t12()
    {
	int hrs,mins,t;
        if(mm=60)
        {
            hrs=hh+1;
            mins=0;
        }
        if(hrs=24)
        {
            t=0;
            hrs=0;
        }

        if(hrs<12)
            t=0;
        if(hrs>=12 && hrs<24)
            t=1;


        return t12(t,hrs,mins);
    }


};
int main()
{
    int h,m,s;
    cout << "\nEnter 24-hour time: ";
    cout << "Hours : ";
    cin >> h;
    cout << " Minutes: ";
    cin >> m;
    cout << "Seconds: ";
    cin >> s;

    t24 t1(h,m,s);
    t1.display();

    t12 t2=t1;

    t2.display();

}
