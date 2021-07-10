#include<iostream>
using namespace std;

string PythagorianTriplet(int a,int b,int c)
{
    int greatearNo=1,sq1=1,sq2=1;
    if(a>b&&a>c)
    {   greatearNo=a;
        sq1=b*b;
        sq2=c*c;    }
    else if(b>c)
    {   greatearNo=b;
        sq1=a*a;
        sq2=c*c;    }
    else
    {   greatearNo=c;
        sq1=a*a;
        sq2=b*b;    } 
    greatearNo*=greatearNo;
    if(sq1+sq2==greatearNo)
    return "Pythagorian Triplet";
    else
    return "Not Pythagorian Triplet";
}
int main()
{
    int a,b,c;
    while(true)
    {cout<<"Enter three values: ";
    cin>>a>>b>>c;
    cout<<PythagorianTriplet(a,b,c)<<endl;}
    return 0;
}