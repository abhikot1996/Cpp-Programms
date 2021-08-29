#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true){
    int no,fact=1;
    cout<<"Enter no: ";
    cin>>no;
    for(int f=no;f>=1;f--)
    {
        fact=f*fact;
    }
    cout<<fact;
    cout<<endl;
    }return 0;
}
