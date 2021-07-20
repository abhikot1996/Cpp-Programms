// #include<bits/stdc++.h>
// using namespace std;

// void BubbleSort(int array[],int size)
// {   for(int i=0;i<size-1;i++)
//     {   for(int j=0;j<size;j++)
//         {   for(int k=0;k<=j;k++)
//             {   int temp=0;
//                 if(array[k]>array[k+1])
//                 {temp=array[k];
//                 array[k]=array[k+1];
//                 array[k+1]=temp;}        
//             }                     
//         }        
//     }
//     for(int l=0;l<size;l++)
//         cout<<array[l]<<" ";
// }

// int main()
// {
//     int size,e,i,j,k;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(e=0;e<size;e++)
//     {
//         cin>>array[e];
//     }
//     BubbleSort(array,siz 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size,i=0;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int j=0;j<size;j++)
//     {   cin>>array[j];  }
//     while(i<size-1)
//     {
//         for(int k=0;k<size-i;k++)
//         {
//             int temp;
//             if(array[k]>array[k+1])
//             {
//                 temp=array[k];
//                 array[k]=array[k+1];
//                 array[k+1]=temp;
//             }
//         }
//         i++;
//     }
//     for(int l=0;l<size;l++)
//     {   cout<<array[l]<<" ";    }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
        { cin>>array[i]; }
    for(int i=0;i<size-1;i++)        
    {    for(int j=0;j<size;j++)            
        {    if(array[j]>array[j+1])
            {   int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;    
            }
        }
    }
    for(int i=0;i<size;i++)
        {cout<<array[i]<<" ";}
    return 0;
}