#include<bits/stdc++.h>
using namespace std;

int HexToDec (string Hno)
{
    int i, len=Hno.size(),x=1,ans=0;
    for(i=len-1;i>=0;i--)
    { 
        if(Hno[i]>='0'&& Hno[i]<='9')
            ans+=x*(Hno[i]-'0');
        else if(Hno[i]>='A' && Hno[i]<='F' )
            ans+=x*(Hno[i]-'A'+10);               
        x*=16;
    }  
    return ans;    
}

int main()
{
    string Hno;
    while(1){
    cout<<endl<<"Enter Hexadecimal no: ";
    cin>>Hno;
    cout<<HexToDec(Hno);}
    return 0;
}