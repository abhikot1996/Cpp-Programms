#include<bits/stdc++.h>
using namespace std;
int fact(int n,int r)
{
    int fact1=1,fact2=1,fact3=1;
    for(int f1=1;f1<=n;f1++)
        fact1*=f1;
    for(int f2=1;f2<=r;f2++)
        fact2*=f2;
    for(int f3=1;f3<=n-r;f3++)
        fact3*=f3;
    cout<<fact1/(fact3*fact2);
    return 0;
}
int main()
{
    while(true){
    int n,r;
    cout<<"Enter values of n and r: ";
    cin>>n>>r;
    fact(n,r);
    cout<<endl;
    }
    return 0;
}