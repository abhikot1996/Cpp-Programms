#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter no fo rows and columns: ";
    cin>>row>>col;
    for(int r=1;r<=row;r++)
    {
        for(int c=1;c<=col;c++)
        {
            if(r==1||r==row || c==1 || c==col)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// o/p
// Enter no fo rows and columns: 5
// 5
// *****
// *   *
// *   *
// *   *
// *****