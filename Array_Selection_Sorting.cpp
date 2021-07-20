// //Selection sorting 

// #include<bits/stdc++.h>
// using namespace std;

// int SelectionSorting(int array[],int size)
// {  
//     int minNo=INT_MAX;     
//     for(int i=0;i<size;i++)
//     {   if(array[i]<minNo)
//             minNo=array[i];   }
    
//     for(int i=0;i<size;i++)
//     {   if(array[i]==minNo)
//             array[i]=INT_MAX; }
//     return minNo;
// }

// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {   cin>>array[i];  }
//     for(int i=0;i<size;i++)
//     {    cout<<SelectionSorting(array,size)<<" ";   }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,minNo=INT_MIN;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    { cin>>array[i];}
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {if(array[j]>array[i])
        {
            int temp = array[i];
            array[i]=array[j];
            array[j]=temp;}
        }
    }
    for(int i=0;i<size;i++)
    { cout<<array[i]<<" "; }
    return 0;
}