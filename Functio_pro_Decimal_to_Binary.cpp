#include <iostream>
using namespace std;

void decToBinary(int n)
{    
    int a[32];   
    int i;
    for(i=0;n > 0;i++) 
    {
       
        a[i] = n % 2;
        n = n / 2;
    } 
    
    for (int j = i - 1; j >= 0; j--)
        cout << a[j];
}
 

int main()
{
    int n;
    cout<<"Enter Decimal no: ";
    cin>>n;
    decToBinary(n);
    return 0;
}