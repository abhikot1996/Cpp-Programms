#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size, currentInd;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<size;i++)
    {
        currentInd=i;
        int preInd=i-1;
        while(array[preInd]>array[currentInd] && preInd>=0)
        {
            array[currentInd]=array[preInd];
            preInd--;           
        }
           
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
