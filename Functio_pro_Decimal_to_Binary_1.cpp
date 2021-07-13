#include<iostream>
using namespace std;

void DecimalToBinary(int Dno)
{
    int a[10],i;
    for(i=0;Dno>0;i++)
    {
        a[i]=Dno%2;
        Dno=Dno/2;
    }
    for(i=i-1;i>=0;i--)
    {
        return a[i];
    }
}

int main()
{
    int no;
    cout<<"Enter decimal no: ";
    cin>>no;
    cout<<DecimalToBinary(no);
    return 0;
}