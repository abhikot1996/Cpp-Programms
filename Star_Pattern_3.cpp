#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    for(int r=1;r<=no;r++)
    {
        for(int c=no;c>=1;c--)
        {
            if(r<=c)
            {cout<<"* ";}
            else
            {cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}

// o/p
// Enter no: 5
// * * * * *
// * * * *
// * * *
// * *
// *