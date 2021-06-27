# include<iostream>
using namespace std;

int main()
{
    int no;
    while(1){
    cout<<"Enter no: ";
    cin>>no;
    if(no%2==0&&no%3==0)
    {cout<<"Divisible by both"<<endl;}
    else if(no%2==0)
    {cout<<"Divisible by only 2"<<endl;}
    else if (no%3==0)
    {cout<<"Divisible by only 3"<<endl;} 
    else
    {cout<<"Divisible by none"<<endl;}
    }
    return 0;
}