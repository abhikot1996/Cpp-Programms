#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size,maxNo=INT_MIN,minNo=INT_MAX;
    cout<<"Enter size or array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<size;i++)
    {
        // if(array[i]>maxNo)
        //     {maxNo=array[i];} 
        // else if(array[i]<minNo)
        //     minNo=array[i];
        maxNo = max(maxNo,array[i]);
        minNo = min(minNo,array[i]);       
    }
    cout<<"Maximum no is: "<<maxNo<<endl;
    cout<<"Minimum no is: "<<minNo;
    return 0;
}