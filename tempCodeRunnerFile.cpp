#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true){
    int rows;
    cout<<"Enter no rows: ";
    cin>>rows;
    for(int r=1;r<=rows;r++)
    {
        for(int c=1;c<=rows*4;c++)
        {
            if(c==(rows+1)-r||c==(rows-1)+r || c==((rows*3)-1)-r||c==((rows*3)-3)+r)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }}
    return 0;
}

