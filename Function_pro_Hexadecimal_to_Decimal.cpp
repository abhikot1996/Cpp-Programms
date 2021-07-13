#include<iostream>
using namespace std;

void HexToDec(string Hno)
{
    int sizeofstring = Hno.size(),i,a[10];
    for(i=0;i<=sizeofstring;i++)
    {
        if(Hno[i]=='A')
        Hno[i]='10';
        else if(Hno[i]=='B')
        Hno[i]='11';
        else if(Hno[i]=='C')
        Hno[i]='12';
        else if(Hno[i]=='D')
        Hno[i]='13';
        else if(Hno[i]=='E')
        Hno[i]='14';
        else if(Hno[i]=='F')
        Hno[i]='15';
        cout<<Hno[i];
    }
}

int mHnoin()
{
    string Hno;
    cout<<"Enter Hexadecimal no: ";
    cin>>Hno;
    HexToDec(Hno);
    return 0;
}