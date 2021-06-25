// Program to print prime no b/w given two numbers

# include<iostream>
using namespace std;

int main()
{
    int fno,lno,temp1;
    cout<<"Enter first no: ";
    cin>>fno;
    cout<<"Enter last no: ";
    cin>>lno;
    for(int temp=fno;temp<lno;temp++)
    {
        for(temp1=2;temp1<temp;temp1++)
        {
            if(temp%temp1==0)
            {
                break;
            }
            // if(temp1==temp-1)
            // {
            //     cout<<temp<<endl;
            // }
        }
        if(temp==temp1)
        {
            cout<<temp<<endl;
        }
    }

    return 0;
}