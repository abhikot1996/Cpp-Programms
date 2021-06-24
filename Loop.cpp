#include<iostream>
using namespace std;

int i;
int main()
{
    int n;
    cout<<"Enter no: ";
    cin>>n;
    while(n>0)
    {
        cout<<"No is: "<<n<<endl;
        cout<<"Enter no: ";
        cin>>n;
    }
    return 0;
}