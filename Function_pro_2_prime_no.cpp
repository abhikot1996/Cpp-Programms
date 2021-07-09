// #include<iostream>
// using namespace std;

// int prime(int no1, int no2)
// {
//     int r,c;
//     for(r=no1;r<=no2;r++)
//     {        
//         for(c=2;c<r;c++)
//         {
//             if(r%c==0)
//             return 0;
//             else if(c==r-1)
//             return r;
//         }          
//         if(r%c==0)
//             return 0;          
//     }   
// }
// int main()
// {
//     int a,b,p;
//     cout<<"Enter two no: ";
//     cin>>a>>b;
//     for(int c=a;c<=b;c++)
//     {
//         p=prime(a,b);
//         if(p!=0)
//         cout<<p<<" ";
//         a++;
//     }
// }

#include<iostream>
using namespace std;

bool isprime(int no1)
{
    for(int c=2;c<no1;c++)
    {
        if(no1%c==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;
    cout<<"Enter two no: ";
    cin>>a>>b;
    for(int r=a;r<=b;r++)
    {
        if(isprime(r))
        {
            cout<<r<<" ";
        }
    }
    return 0;
}