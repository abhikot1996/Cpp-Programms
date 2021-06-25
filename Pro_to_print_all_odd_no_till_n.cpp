// Pro to print all odd numbers till n

# include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    for(int temp=1;temp<=no;temp++)
    {
        if(temp%2==0)
        {
            continue;
        }
        cout<<temp<<" ";
    }
    return 0;
}