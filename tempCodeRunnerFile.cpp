#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    while(true){
    cout<<endl<<"Enter no of rows: ";
    cin>>rows;
    cout<<endl;
    if(rows%2==0)
    {
        for(int r=1;r<=rows;r++)
        {
            for(int c=1;c<rows;c++)
            {
                if(r<=rows/2)
                    if(c<=(rows/2)+1-r || c>=((rows/2)-1)+r)
                        cout<<"*";
                    else
                        cout<<" ";
                else
                    if(c<=r-(rows/2) || c>=(rows/2)+((rows/2)-(r-(rows/2)))) 
                        cout<<"*";
                    else
                        cout<<" ";  
            }
            cout<<endl;
        }
    }
    else
        for(int r=1;r<=rows;r++)
        {
            for(int c=1;c<=rows;c++)
            {
                if(r<=(rows/2)+1)
                    if(c<=(rows/2)+2-r || c>=((rows/2))+r)
                        cout<<"*";
                    else
                        cout<<" ";
                else
                    if(c<=r-(rows/2) || c>=rows-(r-((rows/2)+1)))
                        cout<<"*";
                    else
                        cout<<" ";  
            }
            cout<<endl;
        }
    }
    return 0;
}
