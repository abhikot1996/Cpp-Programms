#include<iostream>
using namespace std;

int fact(int n)
{
    int f=1;
    for(int r=1;r<=n;r++)
    {
        f=f*r;
    }
    return f;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int fact(int n){
//  int factorial=1;
//  for(int i=2;i<=n;i++){ factorial*=i;
//  }
//  return factorial;
// }
// int main(){
//  int n;
//  cin>>n;
//  for(int i=0;i<n;i++){
//  for(int j=0;j<=i;j++){
//  cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//  }
//  cout<<endl;
//  }
 
//  return 0;
// }