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

// #include<iostream>
// using namespace std;
// int main()
// {   int a=1,no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {   for(int c=1;c<=no;c++)
//         {   if(c<=r)
//             {   if(r%2==0)                
//                 {   if(c%2) {a=0;}
//                     else {a=1;}
//                 }
//                 else
//                 {   if(c%2) {a=1;}
//                     else {a=0;}
//                 }
//                 cout<<a<<" ";
//             }
//         }
//         cout<<endl;
//     }       
// }

// Enter no: 5
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=1;
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=9;c++)
//         {
//             if(c>=6-r && c<=4+r)
//             {
//                 if(c<5)
//                 {
//                     cout<<a;
//                     if(c<5)
//                     a--;

//                 }
//                 else
//                 {
//                     cout<<a;
//                     a++;
//                 }
//             }
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
//     for(int r=1;r<=10;r++)
//     {
//         for(int c=1;c<=9;c++)
//         {
//             if(r<=5)
//             {
//                 if(c>=6-r&&c<=4+r)
//                 cout<<"*";
//                 else
//                 cout<<" ";
//             }
//             else
//             {
//                 if(c>=r-5&&c<=15-r)
//                 cout<<"*";
//                 else
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {   for(int r=1;r<=10;r++)
//     {   for(int c=1;c<=9;c++)
//         {   if(r<=5)
//             {   if(c==6-r || c==4+r)
//                 {cout<<"*";}
//                 else
//                 {cout<<" ";}
//             }
//             else
//             {   if(c==r-5 || c==15-r)
//                 {cout<<"*";}
//                 else
//                 {cout<<" ";}
//             }
//         }
//         cout<<endl;
//     }
    // return 0
// }

// #include<iostream>
// using namespace std;

// int main()
// {   for(int r=1;r<=10;r++)
//     {   for(int c=1;c<=9;c++)
//         {   if(r<=5)
//             {   if(c<=6-r||c>=4+r)
//                 {cout<<"*";}
//                 else
//                 {cout<<" ";}
//             }
//             else
//             {   if(c<=r-5||c>=15-r)
//                 {cout<<"*";}
//                 else
//                 {cout<<" ";}
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int r=1;r<=5;r++)
//     {   for(int c=1;c<=9;c++)
//         {   if(c>=6-r&&c<=10-r)
//             {   cout<<"*";}
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
// {   for(int r=1;r<=5;r++)
//     {   for(int c=1;c<=9;c++)
//         {   if(c>=6-r&&c<=10-r)
//             {   if(r==1 || r==5)
//                 {cout<<"*";}
//                 else
//                 {   if(c==6-r||c==10-r)
//                     {cout<<"*";}
//                     else
//                     {cout<<" ";}
//                 }
//             }
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
// {   for(int r=1;r<=5;r++)
//     {   for(int c=1;c<=9;c++)
//         {   if(c>=6-r&&c<=4+r)
//             {   if(r%2)
//                 {   if(c%2)
//                     {cout<<r;}
//                     else
//                     {cout<<" ";}
//                 }
//                 else
//                 {   if(c%2==0)
//                     {cout<<r;}
//                     else
//                     {cout<<" ";}
//                 }
//             }
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
//     for(int r=1;r<=5;r++)
//     {
//         int a=1;
//         for(int c=1;c<=9;c++)
//         {
//             if(c>=6-r&&c<=4+r)
//             {
//                 if(r%2)
//                 {
//                     if(c%2)
//                     {cout<<a;
//                     a++;}
//                     else
//                     cout<<" ";
//                 }
//                 else
//                 {
//                     if(c%2==0)
//                     {cout<<a;
//                     a++;}
//                     else
//                     cout<<" ";
//                 }                
//             }
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
//     for(int r=1;r<=10;r++)
//     {
//         for(int c=1;c<=10;c++)
//         {
//             if(r<=5)
//             {
//                 if(c<=r||c>=11-r)
//                 {
//                     cout<<"*";
//                 }
//                 else
//                 {
//                     cout<<" ";
//                 }
//             }
//             else
//             {
//                 if(c<=11-r||c>=r)
//                 {
//                     cout<<"*";
//                 }
//                 else
//                 {
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int r=1;r<=10;r++)
//     {
//         for(int c=1;c<=10;c++)
//         {
//             if(r<=5)
//             {
//                 if(c==1||c==r || c==10||c==11-r)
//                 cout<<"*";
//                 else
//                 cout<<" ";
//             }
//             else
//             {
//                 if(c==1||c==11-r || c==r||c==10)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter no: ";
    cin>>no;
    for(int r=1;r<=no;r++)
    {
        for(int c=1;c<=no*4;c++)
        {
            if(c==(no+1)-r||c==(no-1)+r||c==(no*3)-1-r||c==no*3-3+r)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}