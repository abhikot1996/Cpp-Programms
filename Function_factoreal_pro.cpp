// #include<iostream>
// using namespace std;

// int fact1(int no)
// {
//     int f=1,r;
//     for(r=no;r>=1;r--);
//     {
//         f=f*r;
//     }

//     return f;
// }

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     cout<<"Factorial is: "<<fact1(no);
//     return 0;
// }

#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;
    for(int i=n;i>=1;i--)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
 int n;
 cout<<"Enter no:";
 cin>>n;
 int ans = fact(n);
 cout<<ans<<endl;
 return 0;
}