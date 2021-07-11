#include<iostream>
using namespace std;

int OctalToDecimal(int Ono)
{
    int rno,cal,temp=0,cno=0,lno;
    rno=Ono;
    while(rno>0)
    {
        cal=1;
        for(int c=1;c<=temp;c++)
        { cal=8*cal; }
        lno=rno%10;
        cno+=lno*cal;
        rno=rno/10;
        temp++;
    }
    return cno;
}

int main()
{
    int Ono;
    cout<<"Enter Octal no: ";
    cin>>Ono;
    cout<<OctalToDecimal(Ono);
    return 0;
}