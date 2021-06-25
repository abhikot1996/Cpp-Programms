# include<iostream>
using namespace std;

int main()
{
    int pocketmoney=3000;
    for(int day=1;day<=30;day++)
    {
        if(day%2==0)
        {
            continue; // Skip the next iternation of the loop
        }
        if(pocketmoney==0)
        {
            break; // Terminet the loop
        }
        cout<<"Neha can go out\n"<<endl;
        pocketmoney-=300;


    }
    return 0;
}