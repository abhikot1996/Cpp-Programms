#include<iostream>
using namespace std;

int f1(int n)
{
    int fact=1;
    for(int r=2;r<=n;r++)
    {
        fact=fact*r;
    }
    return fact;
}

int main()
{
    int n,r;
    cout<<"Enter value of n and r: ";
    cin>>n>>r;

    int ans= f1(n)/(f1(r)*f1(n-r));
    cout<<ans;
}