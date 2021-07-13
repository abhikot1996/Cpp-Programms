#include<iostream>
using namespace std;

int BinaryToDecimal(int Bno)
{
    int cal,temp=0,lno,cno=0,rno;
    while(Bno>0)
    {
        cal=1;
        for(int i=1;i<=temp;i++)
        {
            cal=i*2;
        }
        lno=Bno%10;
        cno+=lno*cal;
        rno=Bno/10;
        temp++;
    }
    return cno;
}

int main()
{
    int a,b;
    cout<<"Enter 1st binary no: ";
    cin>>a;
    cout<<BinaryToDecimal(a);
    return 0;
}