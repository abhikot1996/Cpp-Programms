// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int array[4]={10,20,30,40};
//     cout<<array[3];
//     return 0;
// }

/* User input to initionlaize values in to the array*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<=size-1;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<=size-1;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>array[i];
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size,minNo=INT_MAX,maxNo=INT_MIN;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>array[i]; 
//         maxNo=max(array[i],maxNo);
//         minNo=min(array[i],minNo);     
//     }
//     cout<<"Max value: "<<maxNo;
//     cout<<endl<<"Min value: "<<minNo;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int add(int array[],int size)
// {
//     int add=0;
//     for(int i=0;i<size;i++)
//     {
//         add+=array[i];
//     }
//     return add;
// }

// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>array[i];
//         // add+=array[i];
//     }
//     cout<<add(array,size);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array1[size],array2[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>array1[i];
//         cin>>array2[i];
//         cout<<array1[i]+array2[i]<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size,GreatestNo=0;
//     cout<<"Enter no of how much kids do you wnat to insert: ";
//     cin>>size;
//     string kidName[size],GkidName;
//     int candies[size];
//     for(int i=0;i<size;i++)
//     {
//         cout<<"Enter kid name: ";
//         cin>>kidName[i];
//         cout<<"Enter no of candies: ";
//         cin>>candies[i];
//         if(candies[i]>GreatestNo)
//         {
//             GkidName=kidName[i];
//             GreatestNo=candies[i];
//         }
//     }
//     cout<<endl<<"Name: "<<GkidName<<",";
//     cout<<"Candies: "<<GreatestNo;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int search (int array[],int size,int no)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(array[i]==no)
//         return i;
//     }
//     return -1;
// }

// int main()
// {
//     int size,no;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>array[i];
//     }
//     cin>>no;
//     cout<<search(array,size,no);
// }


// #include<bits/stdc++.h>
// using namespace std;

// int search(int array[],int size,int no)
// {
//     int start =0,end=size,mid;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if(array[mid]==no)
//         return mid;
//         else if(array[mid]>no)
//         end=mid-1;
//         else
//         start=mid+1;
//     }
//     return -1;
// }

// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>array[i];
//     }
//     int no;
//     cin>>no;
//     cout<<search(array,size,no);
//     return 0;
// }