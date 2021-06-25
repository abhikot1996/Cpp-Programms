# include<iostream>
using namespace std;

int main()
{
    int no,sum=0;
    cout<<"Enter no: ";
    cin>>no;
    while(no>0)
    {
        sum+=no;
        cout<<"Enter no: ";
        cin>>no;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}