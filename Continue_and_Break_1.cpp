// Pro to print 1 to 100 number and skip numbers which are divisible of 3

#include<iostream>
using namespace std;

int main()
{
    for(int no=1;no<=100;no++)
    {
        if(no%3==0)
        {continue;}
        cout<<no<<" ";
        if(no%10==0)
        {cout<<endl;}
    }
    return 0;
}