#include<iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout<<"Enter no of rows and columns: ";
    cin>>rows>>columns;
    for(int i=1;i<=rows*2;i++)
    {
        for(int j=1;j<=columns;j++)
        {
            if(i%2==0)
                {cout<<"*|";}
            else
                {cout<<"--";}
            
        }
        cout<<endl;
    }
    return 0;
}

// o/p
// Enter no of rows and columns: 5
// 5
// ----------
// *|*|*|*|*|
// ----------
// *|*|*|*|*|
// ----------
// *|*|*|*|*|
// ----------
// *|*|*|*|*|
// ----------
// *|*|*|*|*|
