#include<iostream>
using namespace std;

int main()
{
    int sideA, sideB, sideC;
    cout<<"Enter length of sides of triangle:"<<endl;
    cin>>sideA>>sideB>>sideC;


    if (sideA == sideB && sideA == sideC)
    {
        cout<<"Equilateral Triangle"<<endl;
            // All sides of lengths are same  
    }
    else if(sideA == sideB || sideA==sideC || sideB==sideC )
    {
        cout<<"Isosceles Triangle"<<endl;
           //  Two sides of lengths are same
    }
    else
    { 
        cout<<"Scalene Triangle"<<endl;
           // All side of lengths are different     
    }

    return 0;
}
