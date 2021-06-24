#include<iostream>
using namespace std;
int main()
{
    int saving;
    cout<<"Enter Savings: ";
    cin>>saving;
    if (saving>5000)
    {
        if (saving>10000)
        {cout<<"Road trip with Neha"<<endl; }
        else
        {cout<<"Shopping with Neha"<<endl;}       
    }
    else if (saving>2000)
    {
        cout<<"Rashami"<<endl;
    }
    else
    {
        cout<<"Friends"<<endl;
    }
    return 0 ;
}
