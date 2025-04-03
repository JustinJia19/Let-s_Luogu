#include <iostream>
using namespace std;
bool year(int n)
{
    if(n%100==0){
        n=n/100;
    }
    if(n%4==0)
        return true;
    else
        return false;

}
int main()
{
    int y,m;
    cin>> y>> m;
    if(m==2){
        if(year(y))
            cout<<"29";
        else
            cout<<"28";
    }
    else if(m==4||m==6||m==9||m==11)
        cout<<"30";
    else
        cout<<"31";
    return 0;
}
