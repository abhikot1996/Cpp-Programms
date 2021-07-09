#include<iostream>
using namespace std;

int add(int no1,int no2)
{
    int no3;
    no3=no1+no2;
    return no3;
}
int main()
{
    int a,b,c;
    cout<<"Enter two no: ";
    cin>>a>>b;
    c=add(a,b);
    cout<<c;
    return 0;
}