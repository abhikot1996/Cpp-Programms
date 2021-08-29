clude<bits/stdc++.h>
using namespace std;
int main()
{
    while(true){
    int Dno;
    string rem1,rem2="";
    cout<<"Enter Decimal no: ";
    cin>>Dno;
    while(Dno>0)
    {
        int rem=Dno%2;
        rem1=to_string(rem);// Converting int to string.
        rem2=rem2+rem1; // string concatination.
        Dno=Dno/2;
    }
    for(int r=rem2.length()-1;r>=0;r--)
        cout<<rem2[r];
    cout<<endl;
    }return 0;
}