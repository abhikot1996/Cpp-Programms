# include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    if(no>10)
    {cout<<no<<" is greater than 10";}
    else if(no<10)
    {cout<<no<<" is less than 10";}
    else
    {cout<<no<<" is equal to 10";}
    return 0;
}