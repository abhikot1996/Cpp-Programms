// Pro to print if given no is prime or not

# include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    for (int temp=2;temp<no;temp++)
    {
        if(no%temp==0)
        {
            cout<<"Not Prime no";
            break;
        }
        if(temp!=no-1)
        {
            continue;
        }
        cout<<"Prime no";
    }    
    return 0;
}