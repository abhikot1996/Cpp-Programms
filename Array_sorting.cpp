//Selection sorting 

#include<bits/stdc++.h>
using namespace std;

int SelectionSorting(int array[],int size)
{  
    int minNo=INT_MAX;     
    for(int i=0;i<size;i++)
    {   if(array[i]<minNo)
            minNo=array[i];   }
    
    for(int i=0;i<size;i++)
    {   if(array[i]==minNo)
            array[i]=INT_MAX; }
    return minNo;
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {   cin>>array[i];  }
    for(int i=0;i<size;i++)
    {    cout<<SelectionSorting(array,size)<<" ";   }
    return 0;
}