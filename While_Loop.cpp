#include<iostream>
using namespace std;

int i;
int main()
{
    int n;
    cout<<"Enter no: ";
    cin>>n;
    int temp=n;
    while(temp>0)
    {
        temp=temp/2;
        cout<<temp<<endl;
    }
    return 0;
}