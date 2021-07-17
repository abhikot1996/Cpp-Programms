#include<bits/stdc++.h>
using namespace std;

int linearsearch(int array[],int size,int no)
{
    for(int i=0;i<size;i++)
    {
        if(array[i]==no)
        return i;
    }
    return -1;
}
int main()
{
    int size,no;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cin>>no;
    cout<<linearsearch(array,size,no);
    return 0;
}