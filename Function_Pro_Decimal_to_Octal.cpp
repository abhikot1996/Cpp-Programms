#include<iostream>
using namespace std;

void DecimalToOctal(int Dno)
{
    int i,rem[10];
    for(i=0;Dno>=8;i++)
    {
        rem[i]=Dno%8;
        Dno=Dno/8;
    }
    cout<<Dno;
    for(i=i-1;i>=0;i--)
    {
        cout<<rem[i];
    }
}
int main()
{
    int Dno;
    cout<<"Enter Decimal no: ";
    cin>>Dno;
    DecimalToOctal(Dno);
    return 0;
}