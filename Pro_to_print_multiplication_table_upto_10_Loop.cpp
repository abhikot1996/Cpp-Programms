#include<iostream>
using namespace std;

int main()
{
    int n, multiply=1;
    while (true)
    {cout<<"Enter no of table: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1; j<=10;j++)
        {
            multiply = j*i;
            cout<<multiply<<" | ";
        }
        cout<<endl<<endl;
    }
    }
    return 0;
}
