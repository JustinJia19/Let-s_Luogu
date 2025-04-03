#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int maxNum = a+b+c+1;
    int arr[maxNum]={0};

    for(int i=1;i<a+1;i++)
    {
        for(int j=1;j<b+1;j++)
        {
            for(int k = 1;k<c+1;k++)
            {
                arr[i+j+k]++;
            }
        }
    }
    int result = arr[0];
    int flag = 1;
    for(int i=0;i<maxNum;i++)
    {
        if(arr[i]>result)
        {
            flag = i;
            result = arr[i];
        }
        //cout<<arr[i]<<" ";
    }
    cout<<flag;

    return 0;
}
