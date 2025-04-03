#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][3];
    int counter = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int flag = 0;
            if(abs(a[i][0]-a[j][0])>5)
                flag++;
            if(abs(a[i][1]-a[j][1])>5)
                flag++;
            if(abs(a[i][2]-a[j][2])>5)
                flag++;
            if(abs(a[i][0]+a[i][1]+a[i][2]-a[j][0]-a[j][1]-a[j][2])>10)
                flag++;
            if(flag==0)
                counter++;
        }
    }
    cout<<counter;
    return 0;
}
