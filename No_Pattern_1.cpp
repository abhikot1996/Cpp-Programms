#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    for(int r=1;r<=no;r++)
    {
        for(int c=1;c<=no;c++)
        {
            if(c<=r)
            {cout<<r<<" ";}
            
        }
        cout<<endl;
    }
    return 0;
}

// o/p
// Enter no: 5
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
