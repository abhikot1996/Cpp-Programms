// 1) Pro to print Hello World

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     cout<<'Hello World';
//     return 0;
// }

// 2) Pro to check given no is even or odd.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<'Enter no: ';
//     cin>>no;
//     if(no%2==0 && no>0)
//     cout<<no<<' is even.';
//     else if(no%2 && no>0)
//     cout<<no<<' is odd.';
//     else
//     cout<<'Not natural no.';
    
//     return 0;
// }

// 3) Pro to check max and min no among to numbers.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no1,no2;
//     cout<<'Enter two no: ';
//     cin>>no1>>no2;
//     if(no1>no2)
//         cout<<no1<<' is maximum no.'<<endl<<no2<<' is minimum no.';
//     else
//         cout<<no2<<' is maximum no.'<<endl<<no1<<' is minimum no.';

//     return 0;
// }


// 4) Pro to find maximum no among three numbers.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no1,no2,no3,maxNo=0;
//     cout<<'Enter three no: ';
//     cin>>no1>>no2>>no3;
//     if(no1>no2)
//     {    if(no1>no3)
//             maxNo=no1;}
//     else if(no2>no3)
//         maxNo=no2;
//     else
//         maxNo=no3;
//     cout<<'Max no: '<<maxNo;

//     return 0;
// }

// 5) Pro to check if triangle is Scalene, Isosceles or Equilateral.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int side1,side2,side3;
//     cout<<'Enter lengths of triangle: ';
//     cin>>side1>>side2>>side3;
//     if(side1==side2 && side1==side3)
//         cout<<'Triangle is Equilateral.';
//     else if(side1==side2 || side1==side3 || side2==side3)
//         cout<<'Triangle is Isosceles.';
//     else
//         cout<<'Triangle is Scalene.';

//     return 0;
// }

// 6) Pro to check given alphabet is vowel or consonant.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char c;
//     cout<<'Enter character: ';
//     cin>>c;
//     int isUppercase,isLowercase;
//     isUppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
//     isLowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
//     if(isLowercase||isUppercase)
//         cout<<'Vowel';
//     else
//         cout<<'Consonant';
    
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
//         cout<<i<<' ';
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
//         cout<<i<<' ';
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
//         cout<<i<<' ';
//     }
//     return 0;
// }

// 10) Pro to find sum of n natural numbers.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int sum=0,no;
//     cout<<'Enter natural no: ';
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
//     cout<<'Enter no: ';
//     cin>>no;
//     for(int i=1;i<=no;i++)
//     {
//         for(int j=1;j<=10;j++)
//         {
//             cout<<i*j<<' ';
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
//     cout<<'Enter no: ';
//     cin>>no;
//     for(int i=1;i<=10;i++)
//         cout<<no<<' X '<<i<<' : '<<no*i<<endl;
//     return 0;
// }

// 13) Pro to Dno only positive numbers

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no,sum=0;
//     cout<<'Enter no: ';
//     cin>>no;
//     while(no>=0)
//     {
//         sum+=no;
//         cout<<'Enter no: ';
//         cin>>no;
//     }
//     cout<<'Sum is : '<<sum;
// }

// 14) Pro to find all odd no till n (using continue).
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no;
//     cout<<'Enter no: ';
//     cin>>no;
//     for(int i=1;i<=no;i++)
//     {
//         if(i%2==0)
//             continue;
//         cout<<i<<' ';
//     }
//     return 0;
// }

// 15) Pro to check given no is prime or not (using break).
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int no,i;
//     cout<<'Enter no: ';
//     cin>>no;
//     for(i=2;i<no;i++)
//     {
//         if(no%i==0)
//         {
//             cout<<'Not a Prime no.';
//             break;
//         }
//     }
//     if(i==no)
//         cout<<'Prime no.';
// }

// 16) Pro to print all prime no in given range.
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int Fno,Lno,i,j;
//     cout<<'Enter 1st and Last no of range: ';
//     cin>>Fno>>Lno;
//     for(i=Fno;i<=Lno;i++)
//     {
//         for(j=2;j<Lno;j++)
//         {
//             if(i%j==0)
//                 break;
//         }
//         if(i==j)
//             cout<<i<<' ';
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
//     cout<<endl<<endl<<'1.Addition, 2.Subcout<<ction'<<endl<<'3.Multiplication, 4.Division'<<endl<<'5.Remainder, 6.Exit'<<endl;
//     cout<<endl<<'Enter choice: ';
//     cin>>choice;
//     if(choice==1 || choice==2 || choice==3 ||choice==4 || choice==5)
//     {cout<<'Enter two no: ';
//     cin>>no1>>no2;}       
//     switch(choice)
//     {
//         case 1:
//                 cout<<'Addition: '<<no1+no2;
//                 break;
//         case 2:
//                 cout<<'Subcout<<ction: '<<no1-no2;
//                 break;
//         case 3: 
//                 cout<<'Multiplication: '<<no1*no2;
//                 break;
//         case 4:
//                 cout<<'Division: '<<no1/no2;
//                 break;
//         case 5:
//                 cout<<'Remainder: '<<no1%no2;
//                 break;
//         case 6: 
//                 exit(0);
//         default:
//                 cout<<'Wrong choice';
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
//     cout<<'Enter character: ';
//     cin>>c;
//     switch(c)
//     {
//         case 'a':
//             cout<<'Vowel';
//             break;
//         case 'e':
//             cout<<'Vowel';
//             break;
//         case 'i':
//             cout<<'Vowel';
//             break;
//         case 'o':
//             cout<<'Vowel';
//             break;
//         case 'u':
//             cout<<'Vowel';
//             break;
//         default:
//             cout<<'Consonant';
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
//     cout<<'Enter no of rows and rowss: ';
//     cin>>rows>>rowss;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rowss;c++)
//             cout<<'*';
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
//     cout<<'Enter no of rows and rowss: ';
//     cin>>rows>>rowss;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rowss;c++)
//         {
//             if(r==1||r==rows || r>1&&r<rows && c==1||c==rowss)
//                 cout<<'*';
//             else
//                 cout<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=r)
//                 cout<<'*';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=(rows+1)-r)
//                 cout<<'* ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c>=(rows+1)-r)
//                 cout<<'*';
//             else
//                 cout<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=r)
//                 cout<<c<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=(rows+1)-r)
//                 cout<<c<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=r)
//                 cout<<r<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=(rows+1)-r)
//                 cout<<r<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             if(c<=r)
//             {   cout<<no<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//             c<=r   ?   r%2  ?  c%2 ? cout<<1<<' ' : cout<<0<<' '  :  c%2 ? cout<<0<<' ' : cout<<1<<' '   :   cout<<' '   ;
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
//     cout<<'Enter no of rows: ';
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
//                 cout<<' ';
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
//     cout<<'Enter no of (rows/2): ';
//     cin>>rows;
//     for(int r=1;r<=(rows*2);r++)
//     {
//         for(int c=1;c<=((rows*2)-1);c++)
//         {
//             if(r<=rows)
//                 {if(c>=(rows+1)-r && c<=(rows-1)+r)
//                     cout<<'*';
//                 else
//                     cout<<' ';}
//             else
//                 {if(c>=(r-rows) && c<=(rows*2)-(r-rows))
//                     cout<<'*';
//                  else
//                     cout<<' ';}
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
//     cout<<'Enter no of(rows/2): ';
//     cin>>rows;
//     for(int r=1;r<=(rows*2);r++)
//     {
//         for(int c=1;c<=((rows*2)-1);c++)
//             r<=rows  ?  c==(rows+1)-r||c==(rows-1)+r ? cout<<'*' : cout<<' '  :  c==(r-rows)||c==(rows*2)-(r-rows) ? cout<<'*' : cout<<' '  ;
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
//     cout<<endl<<'Enter no of rows: ';
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
//                         cout<<'*';
//                     else
//                         cout<<' ';
//                 else
//                     if(c<=r-(rows/2) || c>=(rows/2)+((rows/2)-(r-(rows/2)))) 
//                         cout<<'*';
//                     else
//                         cout<<' ';  
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
//                         cout<<'*';
//                     else
//                         cout<<' ';
//                 else
//                     if(c<=r-(rows/2) || c>=rows-(r-((rows/2)+1)))
//                         cout<<'*';
//                     else
//                         cout<<' ';  
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<rows*2;c++)
//         {
//             if(c>=(rows+1)-r && c<=(rows+(rows-r)))
//                 cout<<'*';
//             else
//                 cout<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<rows*2;c++)
//         {
//             if(c>=(rows+1)-r && c<=(rows+(rows-r)))
//                 if(c==(rows+1)-r||c==(rows+(rows-r)) || r==1||r==rows)
//                     cout<<'*';
//                 else
//                     cout<<' ';
//             else
//                 cout<<' ';
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
//     cout<<'Enter no of rows: ';
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
//                         cout<<' ';}
//                 else
//                     {if(r%2 && c%2==0 || r%2==0 && c%2)
//                         cout<<r;
//                     else
//                         cout<<' ';}
//             else
//                 cout<<' ';
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
//     cout<<'Enter no of rows: ';
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
//                         cout<<' ';}
//                 else
//                     {if(r%2 && c%2==0 || r%2==0 && c%2)
//                         {cout<<n;
//                         n++;}
//                     else
//                         cout<<' ';}
//             else
//                 cout<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//         {
//             if(r<=rows/2)
//             {
//                 if(c<=r || c>=(rows+1)-r)
//                     cout<<'*';
//                 else
//                     cout<<' ';
//             }
//             else
//             {
//                 if(c<=(rows/2)-n || c>(rows/2)+n)
//                     cout<<'*';
//                 else
//                     cout<<' ';
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
//     cout<<'Enter no of rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows;c++)
//         {
//             if(r<=rows/2)
//             {
//                 if(c==1||c==r || c==(rows+1)-r||c==rows)
//                     cout<<'*';
//                 else
//                     cout<<' ';
//             }
//             else
//             {
//                 if(c==1||c==(rows/2)-n || c==(rows/2)+1+n||c==rows)
//                     cout<<'*';
//                 else
//                     cout<<' ';
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
//     cout<<'Enter no rows: ';
//     cin>>rows;
//     for(int r=1;r<=rows;r++)
//     {
//         for(int c=1;c<=rows*4;c++)
//         {
//             if(c==(rows+1)-r||c==(rows-1)+r || c==((rows*3)-1)-r||c==((rows*3)-3)+r)
//                 cout<<'*';
//             else
//                 cout<<' ';
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
//     cout<<'Enter no: ';
//     cin>>no;
//     for(r=2;r<no;r++)
//     {
//         if(no%r==0)
//             break;
//     }
//     if(no==r)
//         cout<<'Prime no'<<endl;
//     else
//         cout<<'Not a prime no'<<endl;
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
//     cout<<'Enter decimal no: ';
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


// 44) Check if no is Armcout<<ng or not.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int no,q=0;
//     cout<<endl<<'Enter no: ';
//     cin>>no;
//     int rno=no;
//     while(rno>0)
//     {
//         int lno=rno%10;
//         q+=lno*lno*lno;
//         rno=rno/10;
//     }
//     if(q==no)
//         cout<<'Armcout<<ng no';
//     else
//         cout<<'Not a Armcout<<ng no';
//     } return 0;
// }

// // o/p
// // Enter no: 153
// // Armcout<<ng no
// // Enter no: 155
// // Not a Armcout<<ng no


// 45) Calculating fact of a number n.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int no,fact=1;
//     cout<<'Enter no: ';
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
//     cout<<'Enter no: ';
//     cin>>no;
//     for(int r=1;r<=no;r++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         cout<<a<<', ';
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
//     int Dno,loop=0,cal,Dno=0;
//     cout<<'Enter Decimal no: ';
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
//         Dno+=lno*cal;
//         rno=rno/10;
//         loop++;
//     }cout<<Dno<<endl;
//     }return 0;
// } 

// // o/p
// // Enter Decimal no: 101101
// // 45
// // Enter Decimal no: 101110
// // 46


// 48) Convert Decimal to Binary.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int Dno;
//     cout<<ng rem1,rem2='';
//     cout<<'Enter Decimal no: ';
//     cin>>Dno;
//     while(Dno>0)
//     {
//         int rem=Dno%2;
//         rem1=to_cout<<ng(rem);// Converting int to cout<<ng.
//         rem2=rem2+rem1; // cout<<ng concatination.
//         Dno=Dno/2;
//     }
//     for(int r=rem2.length()-1;r>=0;r--)
//         cout<<rem2[r];
//     cout<<endl;
//     }return 0;
// }

// // o/p
// // Enter Decimal no: 45
// // 101101


// 49) Print prime no b/w given numbers.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int startNo,endNo,count=0;
//     cout<<'Enter Start and end no: ';
//     cin>>startNo>>endNo;
//     cout<<'Prime numbers are,'<<endl;
//     for(int a=startNo;a<=endNo;a++)
//     {   int b;
//         for(b=2;b<a;b++)
//         {
//             if(a%b==0)
//                 break;
//         }
//         if(b==a)
//             {cout<<a<<',';
//             count++;}
//     }
//     cout<<endl;
//     cout<<'Total Prime numbers: '<<count<<endl;
//     }return 0;
// }

// // o/p
// // Enter Start and end no: 2 20
// // Prime numbers are,
// // 2,3,5,7,11,13,17,19,
// // Total Prime numbers: 8


// 50) Write a program to print all the digits of a positive decimal numbers from right to left.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int Dno;
//     cout<<'Enter Decimal no: ';
//     cin>> Dno;
//     while(Dno>0)
//     {
//         int lno=Dno%10;
//         cout<<lno<<endl;
//         Dno=Dno/10;
//     }}return 0;
// }

// // o/p
// // Enter Decimal no: 4867
// // 7
// // 6
// // 8
// // 4


// 51) Program to print reverse no.
// #include<bits/stdc++.h>
// using namespace std; 
// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter no: ';
//     cin>>no;
//     while(no>0)
//     {
//         int lno=no%10;
//         cout<<lno;
//         no=no/10;
//     }cout<<endl;}return 0;
// }

// // o/p
// // Enter no: 5467
// // 7645

// 52) Program to find Armcout<<n numbers b/w given numbers.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int sno,eno,no1,ifarm,count=0;
//     cout<<'Enter start and end no: ';
//     cin>>sno>>eno;
//     cout<<'Armcout<<ng numbers,'<<endl;
//     for(int a=sno;a<=eno;a++)
//     {   no1=a;ifarm=0;
//         while(no1>0)
//         {
//             int lno=no1%10;
//             ifarm+=lno*lno*lno;
//             no1=no1/10;
//         }
//         if(a==ifarm)
//             {cout<<a<<' ';
//              count++;}
//     }
//     cout<<endl;
//     cout<<'Total Armcout<<ng numbers: '<<count<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter start and end no: 1 1000
// // Armcout<<ng numbers,
// // 1 153 370 371 407
// // Total Armcout<<ng numbers: 5


// 53) Program to print ASCII values of any given character.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     char c;
//     cout<<'Enter character: ';
//     cin>>c;
//     cout<<'ASCII value of '<<c<<' : '<<(int)c;
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter character: A
// // ASCII value of A : 65


// 54) Program to print all factors of number.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter no: ';
//     cin>>no;
//     for(int f=1;f<=no;f++)
//     {
//         if(no%f==0)
//             cout<<f<<' ';
//     }cout<<endl;}
//     return 0;
// }

// // o/p
// // Enter no: 50
// // 1 2 5 10 25 50


// 55) Program to print fact of given number.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int no,fact=1;
//     cout<<'Enter no: ';
//     cin>>no;
//     for(int f=no;f>=1;f--)
//     {
//         fact=f*fact;
//     }
//     cout<<fact;
//     cout<<endl;
//     }return 0;
// }

// // o/p
// // Enter no: 4
// // 24


// 56) Program to Dno two numbers using functions.
// #include<bits/stdc++.h>
// using namespace std;
// int Dno(int a,int b)
// {
//     return a+b;
// }
// int main()
// {
//     int a,b;
//     cout<<'Enter two numbers: ';
//     cin>>a>>b;
//     cout<<Dno(a,b);
//     return 0;
// } 

// // o/p
// // Enter two numbers: 5 5
// // 10


// 57) Program to print given no using functions.
// #include<bits/stdc++.h>
// using namespace std;
// void givenNo(int no)
// {
//     cout<<no;
//     return ;
// }
// int main()
// {
//     int no;
//     cout<<'Enter no: ';
//     cin>>no;
//     cout<<(no);
//     return 0;
// }

// // o/p
// // Enter no: 50
// // 50


// 58) Program to print all prime numbers between given 2 numbers using function.
// #include<bits/stdc++.h>
// using namespace std;
// bool PrimeNo(int P)
// {
//         int Q;
//         for(Q=2;Q<P;Q++)
//         {
//             if(P%Q==0)
//                 return false;
//         }
//         return true;        
// }
// int main()
// {
//     while(true){
//     int sNo,eNo;
//     cout<<'Enter Start and End numbers: ';
//     cin>>sNo>>eNo;
//     for(int P=sNo;P<=eNo;P++)
//     {
//         if(PrimeNo(P))
//             cout<<P<<' ';
//     }
//     cout<<endl;    
//     }return 0;
// }

// // o/p
// // Enter Start and End numbers: 2 20
// // 2 3 5 7 11 13 17 19


// 59) Program to print Fibonacci sequence using function.
// #include<bits/stdc++.h>
// using namespace std;
// int Fibonacci(int no)
// {
//     int a=0,b=1,c=0;
//     for(int f=1;f<=no;f++)
//         {cout<<a<<' ';    
//         c=a+b;
//         a=b;
//         b=c;}        
//     return 0;
// }
// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter no: ';
//     cin>>no;
//     Fibonacci(no);
//     cout<<endl;
//     }return 0;
// }

// // o/p
// // Enter no: 10
// // 0 1 1 2 3 5 8 13 21 34


// 60) Program to find fact of given no using function.
// #include<bits/stdc++.h>
// using namespace std;
// int fact(int no)
// {
//     int fact=1;
//     for(int f=1;f<=no;f++)
//         fact*=f;
//     return fact;

// }
// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter no: ';
//     cin>>no;
//     cout<<fact(no);
//     cout<<endl;
//     }return 0;
// }

// // o/p
// // Enter no: 6
// // 720


// 61) Program to print binary coefficient (nCr).
// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int no)
// {
//     int fact=1;
//     for(int f=2;f<=no;f++)
//         fact*=f;
//     return fact;
// }
// int main()
// {
//     while(true){
//     int n,r;
//     cout<<'Enter values of n and r: ';
//     cin>>n>>r;
//     cout<<factorial(n)/((factorial(n-r))*factorial(r));
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter values of n and r: 7 4
// // 35

// Binary coefficient(Binomial coefficient)
// Formula,
//          (nCr = n! / ((n-r)! * r!))
// e.g,
    // 7C4 = (7! / ((7-4)! * 4!))
    //     = (7*6*5*4*3*2*1 / (3! * 4!))
    //     = (5040 / (6*24))
    //     = (5040 / 144)
    //     = 35


// 62) Program to find out whether given no is even or odd using function. 
// #include<bits/stdc++.h>
// using namespace std;
// bool EvenOrOdd(int no)
// {
//     if(no%2)
//         return false;
//     else 
//         return true;
// }
// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter no: ';
//     cin>>no;
//     EvenOrOdd(no)?cout<<'Even':cout<<'Odd';
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter no: 5
// // Odd
// // Enter no: 10
// // Even
// // Enter no:


// 63)  Program to find out given character is alphabet or not using function.
// #include<bits/stdc++.h>
// using namespace std;
// bool AlphaOrNot(cout<<ng c)
// {
//     if(c>='a' && c<='z' || c>='A' && c<='Z')
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     while(true){
//     cout<<ng c;
//     cout<<'Enter character: ';
//     cin>>c;
//     AlphaOrNot(c)?cout<<'Given character is alphabet':cout<<'Given character is not alphabet';
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter character: Ab
// // Given character is alphabet
// // Enter character: Yz
// // Given character is alphabet
// // Enter character: 15
// // Given character is not alphabet
// // Enter character: /*
// // Given character is not alphabet


// 64) Program to find out max and min no respectively among three numbers enterd by user.
// #include<bits/stdc++.h>
// using namespace std;
// int max(int a,int b, int c)
// {
//     if(a>b && a>c)
//         return a;
//     else
//         if(b>c)
//             return b;
//         else
//             return c;
// } 

// int min(int d,int e,int f)
// {
//     if(d<e && d<f)
//         return d;
//     else
//         if(e<f)
//             return e;
//         else
//             return f;
// }

// int main()
// {
//     while(true){
//     int g,h,i;
//     cout<<'Enter three numbers: ';
//     cin>>g>>h>>i;
//     if(g!=h && g!=i && h!=i)
//     {cout<<'Min: '<<min(g,h,i)<<endl;
//      cout<<'Max: '<<max(g,h,i)<<endl;}
//     else
//         cout<<'Each value should be different'<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter three numbers: 1 1 1
// // Each value should be different
// // Enter three numbers: 50
// // 100
// // 40
// // Min: 40
// // Max: 100


// 65) Program to swap 2 values using function.
// #include<bits/stdc++.h>
// using namespace std;
// int swap(int a,int b)
// {
//     int c;
//     c=a; a=b; b=c;
//     cout<<'a:'<<a<<'  b:'<<b;
//     return 0;
// }
// int main()
// {
//     while(true){
//     int a,b;
//     cout<<'Enter value of a and b: ';
//     cin>>a>>b;
//     cout<<'a:'<<a<<'  b: '<<b<<endl;
//     swap(a,b);
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter value of a and b: 10 20
// // a:10  b: 20
// // a:20  b:10


// 66) Program to check a person is eligible for voting or not by comparing his age using function.
// #include<bits/stdc++.h>
// using namespace std;
// bool Comp_age(int age)
// {
//     if(age>=18)
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     while(true){
//     int age;
//     cout<<'Enter age: ';
//     cin>>age;
//     if(age>=1 && age<=100)
//         Comp_age(age)?cout<<'Eligible to vote':cout<<'Not eligible to vote';
//     else
//         cout<<'Enter valid age';
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter age: 17
// // Not eligible to vote
// // Enter age: 18
// // Eligible to vote
// // Enter age: 100
// // Eligible to vote
// // Enter age: 101
// // Enter valid age


// 67) Program to print Sum of first n natural numbers using function. 
// #include<bits/stdc++.h>
// using namespace std;
// int SumOfNaturalNo(int n)
// {
//     int sum=0;
//     for(int son=1;son<=n;son++)
//     {
//         sum+=son;
//     }
//     return sum;
// }

// int main()
// {
//     while(true)
//     {
//         int n;
//         cout<<'Enter no: ';
//         cin>>n;
//         cout<<SumOfNaturalNo(n)<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter no: 10
// // 55


// 68) Program to check pythagorian triplet.
// #include<bits/stdc++.h>
// using namespace std;
// bool ifPythagorianTriplet(int a,int b,int c)
// {
//     int max=0;
//     a>b && a>c ? max=a : b>c?max=b:max=c;
//     if(max==a)
//         if(a*a==((b*b)+(c*c)))
//             return true;
//         else
//             return false;
//     else if(max==b)
//         if(b*b==(a*a)+(c*c))
//             return true;
//         else
//             return false;
//     else
//         if(c*c==(a*a)+(b*b))
//             return true;
//         else
//             return false;    
// }

// int main()
// {
//     while(true){
//     int a,b,c;
//     cout<<'Enter three values: ';
//     cin>>a>>b>>c;
//     if(ifPythagorianTriplet(a,b,c))
//         cout<<'Given values are Pythagorian Triplet';
//     else
//         cout<<'Given values are not Pythagorian Triplet';
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter three values: 10 6 8
// // Given values are Pythagorian Triplet

// // 10*10==(6*6)+(8*8)


// 69) Program to convert Binary to Decimal using function.
// #include<bits/stdc++.h>
// using namespace std;
// int BinaryToDecimal(int no)
// {
//     int Dno=0,Loop=0;
//     while(no>0)
//     {
//         int cal=1;
//         for(int r=1;r<=Loop;r++)
//         {
//             cal=cal*2;
//         }
//         int lno=no%10;
//         Dno+=lno*cal;
//         no=no/10;
//         Loop++;
//     }
//     return Dno;
// }

// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter binary no: ';
//     cin>>no;
//     cout<<BinaryToDecimal(no)<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter binary no: 101101
// // 45
// // Enter binary no: 101110
// // 46


// 70) Program to convert value Octal to Decimal using function.
// #include<bits/stdc++.h>
// using namespace std;
// int OctalToDecimal(int no)
// {
//     int Loop=0, Dno=0;
//     while(no>0)
//     {
//         int cal=1;
//         for(int r=1;r<=Loop;r++)
//         {
//             cal=cal*8;
//         }
//         int lno=no%10;
//         Dno+=lno*cal;
//         no=no/10;
//         Loop++;
//     }
//     return Dno;
// }

// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter Octal no: ';
//     cin>>no;
//     cout<<OctalToDecimal(no)<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter Octal no: 137
// // 95
// // Enter Octal no: 1236
// // 670


// 71) Program to convert Decimal to Octal using function.
// #include<bits/stdc++.h>
// using namespace std;
// cout<<ng DecimalToOctal(int no)
// {
//     int no1=no;
//     cout<<ng no2,no3='',no4='';
//     while(no>=8)
//     { 
//         if(no>=8) 
//         {no1=no%8; 
//         no2=to_cout<<ng(no1);// Converting int to cout<<ng.
//         no3=no2+no3;// cout<<ng concatination.
//         }
//         no=no/8;
//     }    
//     no4=to_cout<<ng(no);// Converting int to cout<<ng.
//     return no4+no3;// cout<<ng concatination.
// }

// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter Decimal value: ';
//     cin>>no;
//     cout<<DecimalToOctal(no)<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter Decimal value: 670
// // 1236
// // Enter Decimal value: 248
// // 370


// 72) Program to convert Decimal to binary using function.
// #include<bits/stdc++.h>
// using namespace std;
// cout<<ng DecimalToBinary(int no)
// {
//     cout<<ng no1,no2='';
//     while(no>0)
//     {
//         int rem=no%2;
//         no1=to_cout<<ng(rem);
//         no2=no1+no2;
//         no=no/2;
//     }
//     return no2;
// }    

// int main()
// {
//     while(true){
//     int no;
//     cout<<'Enter Decimal no: ';
//     cin>>no;
//     cout<<DecimalToBinary(no)<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter Decimal no: 45
// // 101101
// // Enter Decimal no: 46
// // 101110
// // Enter Decimal no: 47
// // 101111


// 73) Program to convert Hexadecimal to Decimal using function.
// #include<bits/stdc++.h>
// using namespace std;
// int HexaToDecimal(cout<<ng hex)
// {
//     cout<<ng cout<<hex.size()];
//     int cout<<oint[5],loop=hex.size()-1;
//     int Dno=0,cal,temp;
//     for(int r=0;r<hex.size();r++)
//     {
//         for(int array=0;array<1;array++)
//         {   cal=1;
//             rem=h10r];
//             if(rem==10 || rem==10)
//                 rem="10;
//             else if(rem==10 || rem==10)
//                 rem="10;    
//             else if(rem==10 || rem==10)
//                 rem="10;
//             else if(rem==10 || rem==10)
//                 rem="10;
//             else if(rem==10 || rem==10)
//                 rem="10;
//             else if(rem==10 || rem==10)
//                 rem="10;
//             cout<<oint[r] = std::stoi(rem);10cout<<ng to int           
//             temp=cout<<oint[r]; 
//             for(int no1=1;no1<=loop;no1++)
//             {  cal=cal*16; }
//             Dno=Dno+(temp*cal);
//             loop--;
                           
//         }        
//     } 
//     return Dno;
// }

// int main()
// {
//     while(true){
//     cout<<ng hex;
//     cout<<"Enter Hexadecimal no: ";
//     cin>>hex;
//     cout<<HexaToDecimal(hex)<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter Hexadecimal no: 1CF
// // 463
// // Enter Hexadecimal no: 2e8
// // 744
// // Enter Hexadecimal no: EEE
// // 3822


// 74) Program to convert value in decimal to hexadecimal using function.
// #include<bits/stdc++.h>
// using namespace std;
// string DecimalToHexa(int no)
// {
//     int rem;
//     string str="",str1="",str2;
//     while(no>=1)
//     {   str="";str2="";    
//         rem=no%16;
//         if(rem>9)
//         {
//             if(rem==10)
//                 str="A";
//             else if(rem==11)
//                 str="B";    
//             else if(rem==12)
//                 str="C";  
//             else if(rem==13)
//                 str="D";  
//             else if(rem==14)
//                 str="E";  
//             else if(rem==15)
//                 str="F"; 
//             str1=str+str1;        
//         }
//         else 
//         { 
//             str2=to_string(rem); 
//             str1=str2+str1;
//         }
//         no=no/16;               
//     }
//     return str1;    
// }

// int main()
// {
//     while(true){
//     int no;
//     cout<<"Enter Decimal no: ";
//     cin>>no;
//     cout<<DecimalToHexa(no)<<endl;
//     }
//     return 0;
// }

//// o/p
//// Enter Decimal no: 252
//// FC
//// Enter Decimal no: 2482
//// 9B2
//// Enter Decimal no: 2485
//// 9B5


// 75) Program to add tow binary numbers using function
// #include<bits/stdc++.h>
// using namespace std;
// int BinaryToDecimal(int Bno)
// {
//     int Dno=0,cal,Loop=0;
//     while(Bno>0)
//     {
//         cal=1;
//         for(int r=1;r<=Loop;r++)
//         {
//             cal=cal*2;
//         }
//         int rem=Bno%10;
//         Dno+=rem*cal;
//         Bno=Bno/10;
//         Loop++;
//     }
//     return Dno;
// }

// string DecimalToBinary(int Dno)
// {
//     string str,str1="";
//     while(Dno>0)
//     {   str="";
//         int rem=Dno%2;
//         str=to_string(rem);
//         str1=str+str1;
//         Dno=Dno/2;
//     }
//     return str1;
// }

// int main()
// {
//     while(true){
//     int Bno1,Bno2,add;
//     cout<<"Enter 1st binary no: ";
//     cin>>Bno1;
//     cout<<"Enter 2nd binary no: ";
//     cin>>Bno2;
//     add=(BinaryToDecimal(Bno1)) + (BinaryToDecimal(Bno2));
//     cout<<"   Sum of Binary no: "<<DecimalToBinary(add);
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter 1st binary no: 1111000
// // Enter 2nd binary no: 1011010
// //    Sum of Binary no: 11010010


// 76) Program to input values in array.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     cout<<"Enter values of array: ";
//     for(int a=1;a<=size;a++)
//         cin>>array[a];
//     cout<<"Values of array: ";
//     for(int b=1;b<=size;b++)
//         cout<<array[b]<<" ";
//     return 0;
// }

// // o/p
// // Enter size of array: 5
// // Enter values of array: 89 99 80 88 12
// // Values of array: 89 99 80 88 12


// 77) Pro to find max and min values in array.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int size,maxNo=INT_MIN,minNo=INT_MAX;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int loop=1;loop<=size;loop++)
//         cin>>array[loop];
//     for(int loop=1;loop<=size;loop++)
//     {
//         if(maxNo<array[loop])
//             maxNo=array[loop];
//         if(minNo>array[loop])
//                 minNo=array[loop];
//         // maxNo=max(maxNo,array[loop]);
//         // minNo=min(minNo,array[loop]);
//     }
//     cout<<"Max no: "<<maxNo<<endl;
//     cout<<"Min no: "<<minNo<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter size of array: 10
// // 586
// // 549
// // 600
// // 483
// // 100
// // 252
// // 384
// // 259
// // 490
// // 143
// // Max no: 600
// // Min no: 100


// 78) Program to sum of values of array.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int size,sum=0;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int array[size];
//     for(int l=1;l<=size;l++)
//         cin>>array[l];
//     for(int l=1;l<=size;l++)
//     {
//         sum+=array[l];
//     }
//     cout<<"Sum are: "<<sum<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter size of array: 10
// // 50
// // 100
// // 50
// // 300
// // 250
// // 50
// // 50
// // 50
// // 50
// // 50
// // Sum are: 1000


// 79) Program to find kids with greatest no of candies using array.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     while(true){
//     int NoOfKids,GNoOfCandies=INT_MIN, temp=0;
//     cout<<"Enter no of kids: ";
//     cin>>NoOfKids;
//     int NoOfCandies[NoOfKids];
//     string NameOfKids[NoOfKids],GNameOfKid;
//     for(int loop=0;loop<NoOfKids;loop++)
//     {
//         temp++;
//         cout<<temp<<".kid name: ";
//         cin>> NameOfKids[loop];
//         cout<<"No of candies: ";
//         cin>>NoOfCandies[loop];
//         cout<<endl;
//         if(GNoOfCandies<NoOfCandies[loop])
//         {   GNoOfCandies=NoOfCandies[loop];
//             GNameOfKid=NameOfKids[loop];}
//     }
//     cout<<"Kid with greatest no of Candies,"<<endl;
//     cout<<temp<<".Name: "<<GNameOfKid<<endl;
//     cout<<"No of candies: "<<GNoOfCandies<<endl;
//     cout<<endl;
//     }
//     return 0;
// }

// // o/p
// // Enter no of kids: 6
// // 1.kid name: Shubhra
// // No of candies: 200

// // 2.kid name: Anvi
// // No of candies: 190

// // 3.kid name: Shlok
// // No of candies: 210

// // 4.kid name: Arav
// // No of candies: 150

// // 5.kid name: Anvit
// // No of candies: 180

// // 6.kid name: Amey
// // No of candies: 175

// // Kid with greatest no of Candies,
// // 6.Name: Shlok
// // No of candies: 210


// 80) 