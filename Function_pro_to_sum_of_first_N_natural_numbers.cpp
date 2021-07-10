#include<iostream>
using namespace std;

int Sum_Of_Natural_No(int no)
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
    cout<<"Sum of first "<<n<<" Natural no is: "<<Sum_Of_Natural_No(n);
    return 0;
}