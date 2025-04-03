#include <iostream>

using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int num[10] = {0};
    while(m!=n+1)
    {
        int a = m;
        while(a!=0)
        {
            int b = a%10;
            num[b]++;
            a  =(a-b)/10;
        }
        m++;
    }
    for(int i =0;i<10;i++)
        cout<<num[i]<<" ";
    return 0;
}
