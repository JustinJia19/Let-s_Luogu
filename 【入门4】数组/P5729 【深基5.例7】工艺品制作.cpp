#include <iostream>

using namespace std;

int main() {
    int w,x,h;
    cin>>w>>x>>h;
    int cube[w][x][h] ={0};
    int n;
    cin>>n;
    int a,b,c,d,e,f;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d>>e>>f;
        for(int j = a-1;j<d;j++)
        {
            for(int k=b-1;k<e;k++)
            {
                for(int m=c-1;m<f;m++)
                {
                    cube[j][k][m] = 1;
                }
            }
        }
    }
    int counter = 0;
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<x;j++)
        {
            for(int k=0;k<h;k++)
            {
                if(cube[i][j][k]!=1)
                {
                    counter++;
                }
            }
        }
    }
    cout<<counter;


    return 0;
}
