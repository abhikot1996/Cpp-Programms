#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size,i,j,k;
    
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int l=0;l<size;l++)
    {   cin>>array[l];  }
    cout<<"Subarrays,"<<endl;
    for(i=0;i<size;i++)
    {   for(j=i;j<size;j++)
        {   int sum=0;
            for(k=i;k<=j;k++)
            {   
                cout<<array[k]; 
            } 
            cout<<" | ";           
        }        
    }
    cout<<endl<<"Sum of Subarrays,"<<endl;
     for(i=0;i<size;i++)
    {   for(j=i;j<size;j++)
        {   int sum=0;
            for(k=i;k<=j;k++)
            {   
                sum=array[k]+sum;  
            }          
            cout<<sum;
            cout<<" | ";
        }        
    }     
    return 0;
}