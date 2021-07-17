// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array1[size];
//     int array2[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>array1[i];
//         cin>>array2[i];
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<array1[i]+array2[i]<<" ";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size,add=0;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
        add+=array[i];        
    }
    cout<<add;
        
    return 0;
}