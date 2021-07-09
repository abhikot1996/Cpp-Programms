#include<iostream>
using namespace std;

int fact(n)
{
    for(int r=1;r<=n;r++)
    {
        f=f*r;
    }
    return f;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))
        }
    }
    return 0;
}