// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(r==1 || r==no && c<=no)
//             cout<<"*";
//             else if(c>1 &&c<no)
//             cout<<" ";
//             else
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(c<=r)
//             cout<<"*";
//             else
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(c<=(no+1)-r)
//             cout<<"*";
//             else
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(c>=(no+1)-r)
//             {cout<<"*";}
//             else
//             {cout<<" ";}
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(c<=r)
//             {cout<<c<<" ";}
                        
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(c<=(no+1)-r)
//             {cout<<c<<" ";}
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(c<=r)
//             {cout<<r<<" ";}
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(c<=(no+1)-r)
//             {cout<<r<<" ";}
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=1,no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         for(int c=1;c<=no;c++)
//         {
//             if(c<=r)
//             {
//                 cout<<a<<" ";
//                 a++;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{   int a=1,no;
    cout<<"Enter no: ";
    cin>>no;
    for(int r=1;r<=no;r++)
    {   for(int c=1;c<=no;c++)
        {   if(c<=r)
            {   if(r%2==0)                
                {   if(c%2) {a=0;}
                    else {a=1;}
                }
                else
                {   if(c%2) {a=1;}
                    else {a=0;}
                }
                cout<<a<<" ";
            }
        }
        cout<<endl;
    }       
}

// Enter no: 5
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1