#include<iostream>
using namespace std;

int BinaryToDecimal(int Bno)
{
    int lno,rno,cno=0,temp=0,cal;
    rno=Bno;
     
    while(rno>0)
    {
        cal=1;
        for(int c=1;c<=temp;c++)
        {
            cal=2*cal;
        }
        lno=rno%10;
        cno+=lno*cal;
        rno=rno/10;
        temp++; 
    }
    return cno;
}

int main()
{
    int Bno;   
    cout<<"Enter Binary no:";
    cin>>Bno;  
    cout<<BinaryToDecimal(Bno);
    return 0;
}

