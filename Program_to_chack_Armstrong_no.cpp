// #include<iostream>
// using namespace std;

// int main()
// {
    
//     int no,a,b,c=0;
  
//         cout<<"Enter no: ";
//         cin>>no;
//         a=no;
//         while(a!=0)
//         {
//             b=a%10;
//             c=b*b*b+c;
//             a=a/10;
//         }
//         if(no==c)
//         cout<<"Armstrong no"<<endl;
//         else
//         cout<<"Not Armstrong no"<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0, org_num = n;
    while (n>0)
    {
        int rem = n%10;
        sum = sum+rem*rem*rem;
        n=n/10;
    }
    if(org_num==sum){
        cout<<"Armstrong Number\n";
    }
    return 0;
}