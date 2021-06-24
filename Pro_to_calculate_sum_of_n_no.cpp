#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no: ";
    cin>>n;
    int sum = 0;
    for (int i=1;i<=n;i++)
    {sum=i+sum;}
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}