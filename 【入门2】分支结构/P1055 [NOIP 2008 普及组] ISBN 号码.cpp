#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    char x,n;
    cin>>a>>b>>c>>x>>n;
    b = -b;
    c = -c;

    int arr[10];
    arr[0]=a;
    arr[1]=b/100;
    b=b-arr[1]*100;
    arr[2]=b/10;
    arr[3]=b%10;
    arr[4]=c/10000;
    c=c-arr[4]*10000;
    arr[5]=c/1000;
    c=c-arr[5]*1000;
    arr[6]=c/100;
    c=c-arr[6]*100;
    arr[7]=c/10;
    arr[8]=c%10;
    //cout<<(int)n<<endl;
    if((int)n==88)
        arr[9]=10;
    else
        arr[9]=(int)n-48;
    int sum = 0;
    for(int i=0;i<9;i++)
    {
        sum = sum +arr[i]*(i+1);
    }

    int real = sum%11;
    //cout<<arr[9]<<endl<<real<<endl;
    if(real == arr[9])
        cout<<"Right";
    else{
        if(real !=10){
            for(int i=0;i<9;i++)
            {
                cout<<arr[i];
                if(i==0||i==3||i==8)
                    cout<<"-";
            }
            cout<<real;
        }
        else{
            for(int i=0;i<9;i++)
            {
                cout<<arr[i];
                if(i==0||i==3||i==8)
                    cout<<"-";
            }
            cout<<"X";
        }
    }

    return 0;
}
