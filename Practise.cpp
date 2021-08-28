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

// 19) Pro to print solid rectangle
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows,rowss;
//     while(true){
//     cout<<"Enter no of rows and rowss: ";
//     cin>>rows>>rowss;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rowss;c++)
//             cout<<"*";
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows and rowss: 6 10
// // **********
// // **********
// // **********
// // **********
// // **********
// // **********


// 20) Print hollow rectangle.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows,rowss;
//     while(true){
//     cout<<"Enter no of rows and rowss: ";
//     cin>>rows>>rowss;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rowss;c++)
//         {
//             if(r==1||r==rows || r>1&&r<rows && c==1||c==rowss)
//                 cout<<"*";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows and rowss: 6 10
// // **********
// // *        *
// // *        *
// // *        *
// // *        *
// // **********


// 21) Pro to print half pyramid using stars
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=r)
//                 cout<<"*";
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=(rows+1)-r)
//                 cout<<"* ";
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c>=(rows+1)-r)
//                 cout<<"*";
//             else
//                 cout<<" ";
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=r)
//                 cout<<c<<" ";
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=(rows+1)-r)
//                 cout<<c<<" ";
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no fo rows: 5
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
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=r)
//                 cout<<r<<" ";
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=(rows+1)-r)
//                 cout<<r<<" ";
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     while(true){
//     int rows,no=1;
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=r)
//             {   cout<<no<<" ";
//                 no++;}
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     while(true){
//     int rows;
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             c<=r   ?   r%2  ?  c%2 ? cout<<1<<" " : cout<<0<<" "  :  c%2 ? cout<<0<<" " : cout<<1<<" "   :   cout<<" "   ;
//         //         1        2     2.1            2.1              2     2.1            2.1               1                                  
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     while(true){
//     int rows;
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {   int r1=r;
//         for(int c=1;c<=(rows*2)-1;c++)
//         {
//             if(c>=(rows+1)-r && c<=(rows-1)+r)
//                 if(c<rows)
//                     {cout<<r1;
//                      r1--;}
//                 else
//                     {cout<<r1;
//                      r1++;}
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
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
//     int rows;
//     while(true){
//     cout<<"Enter no of (rows/2): ";
//     cin>>rows;
//     for(int r=1;r<=(rows*2);r++)
//     {
//         for(int c=1;c<=((rows*2)-1);c++)
//         {
//             if(r<=rows)
//                 {if(c>=(rows+1)-r && c<=(rows-1)+r)
//                     cout<<"*";
//                 else
//                     cout<<" ";}
//             else
//                 {if(c>=(r-rows) && c<=(rows*2)-(r-rows))
//                     cout<<"*";
//                  else
//                     cout<<" ";}
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

// 32) Print hollow diamond using star: Given n, print diamond with 2*n row.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows;
//     while(true){
//     cout<<"Enter no of(rows/2): ";
//     cin>>rows;
//     for(int r=1;r<=(rows*2);r++)
//     {
//         for(int c=1;c<=((rows*2)-1);c++)
//             r<=rows  ?  c==(rows+1)-r||c==(rows-1)+r ? cout<<"*" : cout<<" "  :  c==(r-rows)||c==(rows*2)-(r-rows) ? cout<<"*" : cout<<" "  ;
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

// 33) Print hollow diamond inscribed in a rectangle.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows;
//     while(true){
//     cout<<endl<<"Enter no of rows: ";
//     cin>>rows;
//     cout<<endl;
//     if(rows%2==0)
//     {
//         for(int r=1;r<=rows;r++)
//         {
//             for(int c=1;c<rows;c++)
//             {
//                 if(r<=rows/2)
//                     if(c<=(rows/2)+1-r || c>=((rows/2)-1)+r)
//                         cout<<"*";
//                     else
//                         cout<<" ";
//                 else
//                     if(c<=r-(rows/2) || c>=(rows/2)+((rows/2)-(r-(rows/2)))) 
//                         cout<<"*";
//                     else
//                         cout<<" ";  
//             }
//             cout<<endl;
//         }
//     }
//     else
//         for(int r=1;r<=rows;r++)
//         {
//             for(int c=1;c<=rows;c++)
//             {
//                 if(r<=(rows/2)+1)
//                     if(c<=(rows/2)+2-r || c>=((rows/2))+r)
//                         cout<<"*";
//                     else
//                         cout<<" ";
//                 else
//                     if(c<=r-(rows/2) || c>=rows-(r-((rows/2)+1)))
//                         cout<<"*";
//                     else
//                         cout<<" ";  
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

// // o/p

// // Enter no of rows: 9

// // *********
// // **** ****
// // ***   ***
// // **     **
// // *       *
// // **     **
// // ***   ***
// // **** ****
// // *********

// // Enter no of rows: 10

// // *********
// // **** ****
// // ***   ***
// // **     **
// // *       *
// // *       *
// // **     **
// // ***   ***
// // **** ****
// // *********

// 34) Print solid Rhombus.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<rows*2;c++)
//         {
//             if(c>=(rows+1)-r && c<=(rows+(rows-r)))
//                 cout<<"*";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p

// // Enter no of rows: 10
// //          **********
// //         **********
// //        **********
// //       **********
// //      **********
// //     **********
// //    **********
// //   **********
// //  **********
// // **********

// 35) Print Hollow Rhombus.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<rows*2;c++)
//         {
//             if(c>=(rows+1)-r && c<=(rows+(rows-r)))
//                 if(c==(rows+1)-r||c==(rows+(rows-r)) || r==1||r==rows)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 6
// //      ******
// //     *    *
// //    *    *
// //   *    *
// //  *    *
// // ******

// 36) Pyramid pattern for numbers.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<rows*2;c++)
//         {
//             if(c>=(rows+1)-r && c<=(rows-1)+r)
//                 if(rows%2)
//                     {if(r%2==0 && c%2==0 || r%2 && c%2)
//                         cout<<r;
//                     else
//                         cout<<" ";}
//                 else
//                     {if(r%2 && c%2==0 || r%2==0 && c%2)
//                         cout<<r;
//                     else
//                         cout<<" ";}
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
// //     1
// //    2 2
// //   3 3 3
// //  4 4 4 4
// // 5 5 5 5 5
// // Enter no of rows: 6
// //      1
// //     2 2
// //    3 3 3
// //   4 4 4 4
// //  5 5 5 5 5
// // 6 6 6 6 6 6

// 37) Pyramid pattern for numbers - 2  .
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows;
//     while(true){
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {   int n=1;
//         for(int c=1;c<rows*2;c++)
//         {
//             if(c>=(rows+1)-r && c<=(rows-1)+r)
//                 if(rows%2)
//                     {if(r%2==0 && c%2==0 || r%2 && c%2)
//                         {cout<<n;
//                         n++;}
//                     else
//                         cout<<" ";}
//                 else
//                     {if(r%2 && c%2==0 || r%2==0 && c%2)
//                         {cout<<n;
//                         n++;}
//                     else
//                         cout<<" ";}
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 5
// //     1
// //    1 2
// //   1 2 3
// //  1 2 3 4
// // 1 2 3 4 5
// // Enter no of rows: 6
// //      1
// //     1 2
// //    1 2 3
// //   1 2 3 4
// //  1 2 3 4 5
// // 1 2 3 4 5 6

// 38) Print solid butterfly pattern.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int rows,n=0;
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//         {
//             if(r<=rows/2)
//             {
//                 if(c<=r || c>=(rows+1)-r)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//             else
//             {
//                 if(c<=(rows/2)-n || c>(rows/2)+n)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//         }
//         cout<<endl;
//         if(r>rows/2)
//             n++;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 10
// // *        *
// // **      **
// // ***    ***
// // ****  ****
// // **********
// // **********
// // ****  ****
// // ***    ***
// // **      **
// // *        *


// 39) Pring hollow butterfly pattern.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int rows,n=0;
//     cout<<"Enter no of rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//         {
//             if(r<=rows/2)
//             {
//                 if(c==1||c==r || c==(rows+1)-r||c==rows)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//             else
//             {
//                 if(c==1||c==(rows/2)-n || c==(rows/2)+1+n||c==rows)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//         }
//         cout<<endl;
//         if(r>rows/2)
//             n++;
//     }}
//     return 0;
// }

// // o/p
// // Enter no of rows: 10
// // *        *
// // **      **
// // * *    * *
// // *  *  *  *
// // *   **   *
// // *   **   *
// // *  *  *  *
// // * *    * *
// // **      **
// // *        *


// 40) Print zig-zag star pattern.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int rows;
//     cout<<"Enter no rows: ";
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows*4;c++)
//         {
//             if(c==(rows+1)-r||c==(rows-1)+r || c==((rows*3)-1)-r||c==((rows*3)-3)+r)
//                 cout<<"*";
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }}
//     return 0;
// }

// // o/p
// // Enter no rows: 3
// //   *   *
// //  * * * *
// // *   *   *


// 41) Check if given no is prime or not.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int no,r;
//     while(true){
//     cout<<"Enter no: ";
//     cin>>no;
//     for(r=2;r<no;r++)
//     {
//         if(no%r==0)
//             break;
//     }
//     if(no==r)
//         cout<<"Prime no"<<endl;
//     else
//         cout<<"Not a prime no"<<endl;
//     }
// }

// // o/p
// // Enter no: 7
// // Prime no
// // Enter no: 8
// // Not a prime no


// 42)  Print all digits of decimal no in reverse.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int dno;
//     while(true){
//     cout<<"Enter decimal no: ";
//     cin>>dno;
//     int rno=dno;
//     while(rno>0)
//     {
//         int lno=rno%10;
//         cout<<lno;
//         rno=rno/10;
//     }cout<<endl;}return 0;
// }

// // o/p
// // Enter decimal no: 1234
// // 4321


// 44) Check if no is Armstrong or not.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int no,q=0;
//     cout<<endl<<"Enter no: ";
//     cin>>no;
//     int rno=no;
//     while(rno>0)
//     {
//         int lno=rno%10;
//         q+=lno*lno*lno;
//         rno=rno/10;
//     }
//     if(q==no)
//         cout<<"Armstrong no";
//     else
//         cout<<"Not a Armstrong no";
//     } return 0;
// }

// // o/p
// // Enter no: 153
// // Armstrong no
// // Enter no: 155
// // Not a Armstrong no


// 45) Calculating factorial of a number n.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int no,fact=1;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int f=no;f>=1;f--)
//     {
//         fact*=f;
//     }
//     cout<<fact<<endl;
//     }return 0;
// }

// // o/p
// // Enter no: 4
// // 24
// // Enter no: 5
// // 120
// // Enter no: 6
// // 720


// 46) Print first n terms of Fibonacci Series with starting term as 0,1.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int a=1,b=0,c=0,no;
//     cout<<"Enter no: ";
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         cout<<a<<", ";
//     }cout<<endl;
//     }return 0;
// }

// // o/p
// // Enter no: 10
// // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,


// 47) Convert Binary to decimal.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int Dno,loop=0,cal,add=0;
//     cout<<"Enter Decimal no: ";
//     cin>>Dno;
//     int rno=Dno;
//     while(rno>0)
//     {
//         cal=1;
//         for(int r=1;r<=loop;r++)
//         {
//             cal=2*cal;
//         }
//         int lno=rno%10;
//         add+=lno*cal;
//         rno=rno/10;
//         loop++;
//     }cout<<add<<endl;
//     }return 0;
// } 

// // o/p
// // Enter Decimal no: 101101
// // 45
// // Enter Decimal no: 101110
// // 46