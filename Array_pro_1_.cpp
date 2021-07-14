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

