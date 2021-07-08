#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    for(int p=2;p<no;p++)
    {
        if(no%p==0)
        {
            cout<<"Not a Prime no";
            break;
        }
        else if(p==no-1)
        cout<<"Prime no";
    }
    return 0;
}