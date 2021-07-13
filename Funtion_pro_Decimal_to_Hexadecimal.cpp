#include<bits/stdc++.h>
using namespace std;

void DecimalToHexa(int Dno)
{
    int i,rem[10],x=1,ans=0;
    for(i=0;Dno>=16;i++)
    {
        rem[i]=Dno%16;
        Dno=Dno/16;
    }
    if(Dno==10)
    cout<<"A";
    else if(Dno==11)
    cout<<"B";
    else if(Dno==12)
    cout<<"C";
    else if(Dno==13)
    cout<<"D";
    else if(Dno==14)
    cout<<"E";
    else if(Dno==15)
    cout<<"F";
    else
    cout<<Dno;
    for(i=i-1;i>=0;i--)
    {
        if(rem[i]==10)
        cout<<"A";
        else if(rem[i]==11)
        cout<<"B";
        else if(rem[i]==12)
        cout<<"C";
        else if(rem[i]==13)
        cout<<"D";
        else if(rem[i]==14)
        cout<<"E";
        else if(rem[i]==15)
        cout<<"F";
        else
        cout<<rem[i];
    }
    x*=16;
}

int main()
{
    int Dno;
    while(1){
    cout<<endl<<"Enter Decimal no: ";
    cin>>Dno;
    DecimalToHexa(Dno);}
    return 0;
}
