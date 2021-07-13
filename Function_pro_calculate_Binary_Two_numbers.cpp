#include<iostream>
using namespace std;

int BinaryToDecimal(int Bno)
{
    int cal,temp=0,lno,cno=0;
    while(Bno>0)
    {
        cal=1;
        for(int i=1;i<=temp;i++)
        {
            cal=cal*2;
        }
        lno=Bno%10;
        cno+=lno*cal;
        Bno=Bno/10;
        temp++;
    }
    return cno;
}

void decToBinary(int n)
{    
    int a[10];   
    int i;
    for(i=0;n > 0;i++) 
    {
           a[i] = n % 2;
        n = n / 2;
    } 
    cout<<"Addition is: ";
    
    for (i = i - 1; i >= 0; i--)
        cout << a[i];
}

int main()
{
    int a,b,c;
    while(1){
    cout<<endl<<"Enter 1st and 2nd binary no: ";
    cin>>a>>b;
    a=BinaryToDecimal(a);
    b=BinaryToDecimal(b);
    decToBinary(a+b);   }
    return 0;
}