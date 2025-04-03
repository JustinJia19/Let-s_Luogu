#include <iostream>

using namespace std;

int main() {
    char a[100];
    char b[100];
    for(int i = 0;i<100;i++)
    {
        char c = getchar();
        if(c=='\n') break;
        a[i] = c;
    }
    for(int i = 0;i<100;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            b[i] = a[i]-'a'+'A';
        else
            b[i]=a[i];
    }
    cout<<b;


    return 0;
}
