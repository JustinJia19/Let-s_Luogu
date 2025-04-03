#include <iostream>

using namespace std;
void printNumLine1(int a)
{
    switch(a)
    {
    case 0:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        cout<<"XXX";
        break;
    case 1:
        cout<<"..X";
        break;
    case 4:
        cout<<"X.X";
        break;
    }

}
void printNumLine2(int a)
{
    switch(a)
    {
    case 0:
        cout<<"X.X";
        break;
    case 1:
    case 2:
    case 3:
    case 7:
        cout<<"..X";
        break;
    case 4:
    case 8:
    case 9:
        cout<<"X.X";
        break;
    case 5:
    case 6:
        cout<<"X..";
        break;
    }

}
void printNumLine3(int a)
{
    switch(a)
    {
    case 0:
        cout<<"X.X";
        break;
    case 1:
    case 7:
        cout<<"..X";
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
        cout<<"XXX";
        break;
    }
}
void printNumLine4(int a)
{
    switch(a){
    case 0:
    case 6:
    case 8:
        cout<<"X.X";
        break;
    case 1:
    case 7:
        cout<<"..X";
        break;
    case 2:
        cout<<"X..";
        break;
    case 3:
    case 4:
    case 5:
    case 9:
        cout<<"..X";
        break;
    }
}
void printNumLine5(int a)
{
    switch(a)
    {
    case 0:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 9:
        cout<<"XXX";
        break;
    case 1:
    case 7:
    case 4:
        cout<<"..X";
        break;
    }
}
int main() {
    int n;
    cin>>n;
    int num[n];
    char ch;
    do{
    scanf("%c",&ch);
    }while(ch == '\n' || ch == '\r');//屏蔽换行读入字符
    num[0]=(int)ch-48;
    for(int i=1;i<n;i++)
    {
        char a;
        a=getchar();
        num[i]=(int)a-48;
    }
    for(int i=0;i<n;i++)
    {
        printNumLine1(num[i]);
        if(i!=n-1) cout<<'.';
        else cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        printNumLine2(num[i]);
        if(i!=n-1) cout<<'.';
        else cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        printNumLine3(num[i]);
        if(i!=n-1) cout<<'.';
        else cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        printNumLine4(num[i]);
        if(i!=n-1) cout<<'.';
        else cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        printNumLine5(num[i]);
        if(i!=n-1) cout<<'.';
        else cout<<endl;
    }

    return 0;
}

