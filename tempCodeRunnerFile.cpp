include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    for(int r=1;r<=no;r++)
    {
        for(int c=1;c<=no*3;c++)
        {
            if(c==(no+1)-r||c==(no-1)+r||c==no*2+1-r)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}