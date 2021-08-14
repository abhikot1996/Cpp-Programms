#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size,maxNo=INT_MIN;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {cin>>array[i];}
    for(int j=0;j<size;j++)
    {
        if(array[j]>maxNo)
            {maxNo=array[j];}
        cout<<maxNo<<endl;
    }
    // cout<<"Maximum no of array is: "<<maxNo;
    return 0;
}