// 1) Pro to print Hello World

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     cout<<"Hello World";
//     return 0;
// }

// 2) Pro to check given no is even or odd.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     if(no%2==0 && no>0)
//     cout<<no<<" is even.";
//     else if(no%2 && no>0)
//     cout<<no<<" is odd.";
//     else
//     cout<<"Not natural no.";
    
//     return 0;
// }

// 3) Pro to check max and min no among to numbers.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no1,no2;
//     cout<<"Enter two no: ";
//     cin>>no1>>no2;
//     if(no1>no2)
//         cout<<no1<<" is maximum no."<<endl<<no2<<" is minimum no.";
//     else
//         cout<<no2<<" is maximum no."<<endl<<no1<<" is minimum no.";

//     return 0;
// }


// 4) Pro to find maximum no among three numbers.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no1,no2,no3,maxNo=0;
//     cout<<"Enter three no: ";
//     cin>>no1>>no2>>no3;
//     if(no1>no2)
//     {    if(no1>no3)
//             maxNo=no1;}
//     else if(no2>no3)
//         maxNo=no2;
//     else
//         maxNo=no3;
//     cout<<"Max no: "<<maxNo;

//     return 0;
// }

// 5) Pro to check if triangle is Scalene, Isosceles or Equilateral.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int side1,side2,side3;
//     cout<<"Enter lengths of triangle: ";
//     cin>>side1>>side2>>side3;
//     if(side1==side2 && side1==side3)
//         cout<<"Triangle is Equilateral.";
//     else if(side1==side2 || side1==side3 || side2==side3)
//         cout<<"Triangle is Isosceles.";
//     else
//         cout<<"Triangle is Scalene.";

//     return 0;
// }

// 6) Pro to check given alphabet is vowel or consonant.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char c;
//     cout<<"Enter character: ";
//     cin>>c;
//     int isUppercase,isLowercase;
//     isUppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
//     isLowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
//     if(isLowercase||isUppercase)
//         cout<<"Vowel";
//     else
//         cout<<"Consonant";
    
//     return 0;
// }

// 7) while loop pro

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i=1;
//     while(i<=5)
//     {
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }

// 8) do whle loop program

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i=1;
//     do
//     {
//         cout<<i<<" ";
//         i++;
//     }
//     while (i<=5);
//     return 0;
// }

// 9) for loop program.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }

// 10) Pro to find sum of n natural numbers.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int sum=0,no;
//     cout<<"Enter natural no: ";
//     cin>>no;
//     for(int i=1;i<=no;i++)
//         sum+=i;
//     cout<<sum;
//     return 0;
// }

// 11) Pro to print multiplication tables upto n.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int i=1;i<=no;i++)
//     {
//         for(int j=1;j<=10;j++)
//         {
//             cout<<i*j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 12) Pro to print multiplication table upto 10.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int i=1;i<=10;i++)
//         cout<<no<<" X "<<i<<" : "<<no*i<<endl;
//     return 0;
// }

// 13) Pro to add only positive numbers

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no,sum=0;
//     cout<<"Enter no: ";
//     cin>>no;
//     while(no>=0)
//     {
//         sum+=no;
//         cout<<"Enter no: ";
//         cin>>no;
//     }
//     cout<<"Sum is : "<<sum;
// }

// 14) Pro to find all odd no till n (using continue).
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int i=1;i<=no;i++)
//     {
//         if(i%2==0)
//             continue;
//         cout<<i<<" ";
//     }
//     return 0;
// }

// 15) Pro to check given no is prime or not (using break).
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no,i;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(i=2;i<no;i++)
//     {
//         if(no%i==0)
//         {
//             cout<<"Not a Prime no.";
//             break;
//         }
//     }
//     if(i==no)
//         cout<<"Prime no.";
// }

// 16) Pro to print all prime no in given range.
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int Fno,Lno,i,j;
//     cout<<"Enter 1st and Last no of range: ";
//     cin>>Fno>>Lno;
//     for(i=Fno;i<=Lno;i++)
//     {
//         for(j=2;j<Lno;j++)
//         {
//             if(i%j==0)
//                 break;
//         }
//         if(i==j)
//             cout<<i<<" ";
//     }
//     return 0;
// }

// 17) Pro to write a simple calculator (switch case).
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     while(1)
//     {int no1,no2,choice;    
//     cout<<endl<<endl<<"1.Addition, 2.Substraction"<<endl<<"3.Multiplication, 4.Division"<<endl<<"5.Remainder, 6.Exit"<<endl;
//     cout<<endl<<"Enter choice: ";
//     cin>>choice;
//     if(choice==1 || choice==2 || choice==3 ||choice==4 || choice==5)
//     {cout<<"Enter two no: ";
//     cin>>no1>>no2;}       
//     switch(choice)
//     {
//         case 1:
//                 cout<<"Addition: "<<no1+no2;
//                 break;
//         case 2:
//                 cout<<"Substraction: "<<no1-no2;
//                 break;
//         case 3: 
//                 cout<<"Multiplication: "<<no1*no2;
//                 break;
//         case 4:
//                 cout<<"Division: "<<no1/no2;
//                 break;
//         case 5:
//                 cout<<"Remainder: "<<no1%no2;
//                 break;
//         case 6: 
//                 exit(0);
//         default:
//                 cout<<"Wrong choice";
//     }
//     }
//     return 0;
    
// }

// 18) Pro to find whether a alphabet is vowel or consonant.
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char c;
//     cout<<"Enter character: ";
//     cin>>c;
//     switch(c)
//     {
//         case 'a':
//             cout<<"Vowel";
//             break;
//         case 'e':
//             cout<<"Vowel";
//             break;
//         case 'i':
//             cout<<"Vowel";
//             break;
//         case 'o':
//             cout<<"Vowel";
//             break;
//         case 'u':
//             cout<<"Vowel";
//             break;
//         default:
//             cout<<"Consonant";
//     }
//     return 0;
// }

// 19) Pro to print solid rectangle.
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=4;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // ****
// // ****
// // ****
// // ****
// // ****


// 20) Print hollow rectangle.
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=4;c++)
//         {
//             if(r==1||r==5 || r>=2&&r<=4 && c==1||c==4)
//                 cout<<"*";            
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // ****
// // *  *
// // *  *
// // *  *
// // ****

// 21) Pro to print half pyramid using stars
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c<=r)
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // *
// // **
// // ***
// // ****
// // *****

// 22) Pro to print an Inverted Half pyramid
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c<=6-r)
//                 cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// o/p
// // * * * * *
// // * * * *
// // * * *
// // * *
// // *

// 23) Pro to print half pyramid after 180 degree rotation.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c>=6-r)
//                 cout<<"*";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// //     *
// //    **
// //   ***
// //  ****
// // *****

// 24) Pro to print half pyramid using numbers.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c<=r)
//                 cout<<c<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // 1
// // 1 2
// // 1 2 3
// // 1 2 3 4
// // 1 2 3 4 5

// 25) Print inverted half pyramid using numbers.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c<=6-r)
//                 cout<<c<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // 1 2 3 4 5
// // 1 2 3 4
// // 1 2 3
// // 1 2
// // 1

// 26) Print half pyramid using numbers - 2.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int no=1;
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c<=r)
//                 cout<<no<<" ";
//         }
//         cout<<endl;
//         no++;
//     }
//     return 0;
// }

// // o/p
// // 1
// // 2 2
// // 3 3 3
// // 4 4 4 4
// // 5 5 5 5 5

// 27) Print inverted half pyramid using numbers - 2.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int no=1;
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c<=6-r)
//                 cout<<no<<" ";
//         }
//         cout<<endl;
//         no++;
//     }
//     return 0;
// }

// // o/p
// // 1 1 1 1 1
// // 2 2 2 2
// // 3 3 3
// // 4 4
// // 5

// 28) Print Floyd's pyramid.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int no=1;
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c<=r)
//             {   cout<<no<<" ";
//                 no++;}
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10
// // 11 12 13 14 15

// 29) Print 0-1 pattern
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no=1;
//     for(int r=1;r<=5;r++)
//     {   no=r%2?no=1:no=0;
//         for(int c=1;c<=5;c++)
//         {   if(c<=r)
//             {   cout<<no<<" ";
//                 no==1?no--:no++;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // 1
// // 0 1
// // 1 0 1
// // 0 1 0 1
// // 1 0 1 0 1

// 30) Print 5 palindromic pattern
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         int no=r;
//         for(int c=1;c<=9;c++)
//         {
//             if(c>=6-r && c<=4+r)
//             {
//                 if(c<=5)
//                     {cout<<no;
//                     if(c<5)
//                         no--;}
//                 else
//                     {no++;
//                      cout<<no;}
//             }
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// //     1
// //    212
// //   32123
// //  4321234
// // 543212345

// 31) Print diamond using star: Given n, print diamond with 2*n row.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     while(true)
//     {cout<<"Enter no of (row/2): ";
//     cin>>n;
//     for(int r=1;r<=n*2;r++)
//     {
//         for(int c=1;c<=(n*2)-1;c++)
//         {
//             if(r<=((n*2)/2))
//                 c>=((n*2)/2)+1-r && c<=((n*2)/2)-1+r?cout<<"*":cout<<" ";
//             else
//                 c>=r-((n*2)/2) && c<=(n*3)-r?cout<<"*":cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 7
// //       *
// //      ***
// //     *****
// //    *******
// //   *********
// //  ***********
// // *************
// // *************
// //  ***********
// //   *********
// //    *******
// //     *****
// //      ***
// //       *

// 32) Print Hollow Diamond using star.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int r=1;r<=10;r++)
//     {
//         for(int c=1;c<=9;c++)
//         {
//             if(r==1&&c==5)
//                 cout<<"*";
//             else if(r==10&&c==5 )
//                 cout<<"*";
//             else if(r==2&&c==4 || r==2&&c==6)
//                 cout<<"*";
//             else if(r==9&&c==4 || r==9&&c==6)
//                 cout<<"*";
//             else if(r==3&&c==3 || r==3&&c==7)
//                 cout<<"*";
//             else if(r==8&&c==3 || r==8&&c==7)
//                 cout<<"*";
//             else if(r==4&&c==2 || r==4&&c==8)
//                 cout<<"*";
//             else if(r==7&&c==2 || r==7&&c==8)
//                 cout<<"*";
//             else if(r==5&&c==1 || r==5&&c==9)
//                 cout<<"*";
//             else if(r==6&&c==1 || r==6&&c==9)
//                 cout<<"*";
//             else
//                 cout<<" ";
            
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // o/p
// //     *
// //    * *
// //   *   *
// //  *     *
// // *       *
// // *       *
// //  *     *
// //   *   *
// //    * *
// //     *

// 33) Print hollow diamond using star: Given n, print diamond with 2*n row.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     while(true)
//     {cout<<"Enter no of (row/2): ";
//     cin>>n;
//     for(int r=1;r<=n*2;r++)
//     {
//         for(int c=1;c<=(n*2)-1;c++)
//         {
//             if(r<=((n*2)/2))
//                 c==((n*2)/2)+1-r || c==((n*2)/2)-1+r?cout<<"*":cout<<" ";
//             else
//                 c==r-((n*2)/2) || c==(n*3)-r?cout<<"*":cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of (row/2): 7
// //       *
// //      * *
// //     *   *
// //    *     *
// //   *       *
// //  *         *
// // *           *
// // *           *
// //  *         *
// //   *       *
// //    *     *
// //     *   *
// //      * *
// //       *
