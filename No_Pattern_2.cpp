#include<iostream>
using namespace std;

int main()
{
    int a=1,no;
    cout<<"Enter no: ";
    cin>>no;
    for(int r=1;r<=no;r++)
    {
        for(int c=1;c<=r;c++)
        {
                cout<<a<<" ";
                a++;
        }
        cout<<endl;
    }
    return 0;
}

// o/p
// Enter no: 5
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15