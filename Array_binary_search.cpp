#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int array[],int size,int no)
{
    int start=0,end=size;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(no==array[mid])
        return mid;
        else if(no<array[mid])
        end=mid-1;
        else
        start=mid+1;
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
    cout<<BinarySearch(array,size,no);
    return 0;
}