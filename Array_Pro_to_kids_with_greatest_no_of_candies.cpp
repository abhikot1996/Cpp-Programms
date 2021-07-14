#include<bits/stdc++.h>
using namespace std;

int main()
{
    int greatest_no_of_candies=0,size;
    cout<<"How much kids do you want to insert: ";
    cin>>size;
    string kidName[size],gname;
    int no_of_candies[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter kid name: ";
        cin>>kidName[i];
        cout<<"Enter no of candies: ";
        cin>>no_of_candies[i];
        if(no_of_candies[i]>greatest_no_of_candies)
        {
            greatest_no_of_candies=no_of_candies[i];
            gname=kidName[i];
        }
    }
    cout<<endl<<"Kid with greatest no of candies,";
    cout<<endl<<"Name: "<<gname<<", ";
    cout<<"Candies: "<<greatest_no_of_candies;
    return 0;
}