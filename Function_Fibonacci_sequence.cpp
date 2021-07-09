#include<iostream>
using namespace std;

void fib(int n)
{
    int a=0,b=1,c=0;
    for(int r=1;r<=n;r++)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }
}
int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    fib(no);
    return 0;
}