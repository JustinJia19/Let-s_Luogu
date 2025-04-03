#include <iostream>
using namespace std;
int getMax(int a,int b, int c)
{
    int max = a;
    if(a>b)
     max=a;
    else
    max=b;
    if(max>c)
    return max;
    else 
    return c;
}
int getMin(int a,int b, int c)
{
    int min = a;
    if(a<b)
     min=a;
    else
    min=b;
    if(min<c)
    return min;
    else 
    return c;
}
int main()
{   
    int a,b,c;
    cin>>a>>b>>c;
    int max=getMax(a,b,c);
    int min=getMin(a,b,c);
    int mid=a+b+c-max-min;

    if(max>=min+mid)
    {
        cout<<"Not triangle"<<endl;
        return 0;
    }
    if(max*max==min*min+mid*mid)
    {
        cout<<"Right triangle"<<endl;
        if(min==mid)
        cout<<"Isosceles triangle"<<endl;
        return 0;
    }
    else if(max*max<min*min+mid*mid)
    {
        cout<<"Acute triangle"<<endl;
        if(min==mid)
        cout<<"Isosceles triangle"<<endl;
        if(min==max)
        cout<<"Equilateral triangle"<<endl;
        return 0;
    }
    else{
        cout<<"Obtuse triangle"<<endl;
        if(min==mid)
        cout<<"Isosceles triangle"<<endl;
        return 0;
    }
}
