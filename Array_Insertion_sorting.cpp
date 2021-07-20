// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {   cin>>array[i];  }
//     // for(int i=0;i<size;i++)
//     // {
//         for(int j=0;j<size;j++)
//         {
//             for(int k=0;k<=j+1;k++)
//             {
//                 if(array[j]>array[k])
//                 {
//                     int temp=array[k];
//                     array[k]=array[j];
//                     array[j]=temp;
//                 }
//             }
//         }
//     // }
//     for(int i=0;i<size;i++)
//     {
//         cout<<array[i]<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size;
//     cout<<"Enter no of array: ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>array[i];
//     }
//     for(int k=1;k<size;k++)
//     {
//         int current=array[k];
//         int comp=k-1;
//         while(current<array[comp]&& comp>=0)
//         {
//             array[comp+1]=array[comp];
//             comp--;
//         }
//         array[comp+1]=current;
//     }
//     for(int j=0;j<size;j++)
//     {
//         cout<<array[j]<<" ";
//     }
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
    {
        cin>>array[i];
    }
    for(int i=1;i<size;i++)
    {
        int current=array[i];
        int ind=i-1;
        while(current<array[ind] && ind>=0)
        {
            array[ind+1]=array[ind];
            ind--;
        }
        array[ind+1]=current;
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}