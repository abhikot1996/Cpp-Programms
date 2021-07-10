#include<iostream>
using namespace std;

int sum(int no)
{
    int sum=0;
    for(int i=1;i<=no;i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" Natural no is: "<<sum(n);
    return 0;
}