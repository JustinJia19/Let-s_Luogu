#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter = 1;
    int counterMax = 0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(i>0&&x==temp+1)
            counter++;
        else
            counter = 1;
        temp = x;
        if(counter>counterMax)
            counterMax=counter;
    }
    cout<<counterMax;

    return 0;
}
