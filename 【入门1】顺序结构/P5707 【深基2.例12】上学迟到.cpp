#include <iostream>
#include <cmath>
using namespace std;
void showHour(int h)
{
    h = h%24;
    if(h>=10)
    cout<<h;
    else
    cout<<"0"<<h;
}
void showMin(int m)
{
    if(m>=10)
    cout<<m;
    else
    cout<<"0"<<m;
}
int main()
{   
    int s, v;
    cin >> s>>v;
    double m_s=(double)s;
    double m_v=(double)v;
    double m_time = ceil(m_s/m_v);
    int time = (int)m_time+10;
    int school = 24*60+8*60;
    int aheadTime = school - time;
    int m = aheadTime%60;
    int h = (aheadTime-m)/60;
    showHour(h);
    cout<<":";
    showMin(m);

    return 0;
}
