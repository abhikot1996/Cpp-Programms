#include<iostream>
using namespace std;

int main()
{
    int no,a=1,b=0,c=0;
    cout<<"Enter no: ";
    cin>>no;
    for(int i=1;i<=no;i++)
    {
        cout<<c<<" ";
        c=a+b;
        a=b;
        b=c;
        
    }
    return 0;
}