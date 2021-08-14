#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size,NoOfSub=0,sum;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {cin>>array[i];}
    cout<<"Subarrays,"<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {   
            for(int k=i;k<=j;k++)
            {
                cout<<array[k];
                
            }
            cout<<" | "; 
            NoOfSub++;           
        }
    }
    cout<<endl<<"No of subarrays is: "<<NoOfSub;
    cout<<endl<<"Sum of subarrays,"<<endl;
    for(int i=0;i<size;i++)
    {
        sum=0;
        for(int j=i;j<size;j++)
        {          
            sum=sum+array[j];
            cout<<sum<<" | ";
        }
    }
    return 0;
}























