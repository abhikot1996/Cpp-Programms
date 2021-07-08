#include<iostream>
using namespace std;

int main()
{
    int no,a,b;
    cout<<"Enter no: ";
    cin>>no;
    a=no;
    while (a!=0)
    {
        b=a%10;
        a=a/10;
        cout<<b;
    }
    return 0;    
}