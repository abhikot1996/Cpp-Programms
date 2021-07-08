#include<iostream>
using namespace std;

int main()
{
    int no,b=1;
    cout<<"Enter no: ";
    cin>>no;
    for(int a=no;a>=1;a--)
    {
        b=a*b;
    }
    cout<<"Factorial of "<<no<<" is "<<b;
    return 0;
}