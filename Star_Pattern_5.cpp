// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=4;
//     for(int r=1;r<=8;r++)
//     {
//         for(int c=1;c<=8;c++)
//         {
//             if(r<=4)
//             {
//                 if(c<=r||c>=9-r)
//                 {cout<<"* ";}
//                 else
//                 {cout<<"  ";}
//             }
//             else
//             {
//                 if(c<=a || c>=r)
//                 {cout<<"* ";}
//                 else
//                 {cout<<"  ";}
//             }
//         }
//         if(r>4)
//         a--;        
//         cout<<endl;               
//     }
//     return 0;
// }

// o/p
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *


#include<iostream>
using namespace std;

int main()
{
    int no,a;   
    cout<<"Enter no: ";
    cin>>no;
    a=no;
    for(int r=1;r<=no*2;r++)
    {
        for(int c=1;c<=no*2;c++)
        {
            if(r<=no)
            {
                if(c<=r || c>=no*2+1-r)
                {cout<<"* ";}
                else
                {cout<<"  ";}
            }
            else
            {
                if(c<=a||c>=r)
                {cout<<"* ";}
                else
                {cout<<"  ";}
            }             
        }
        cout<<endl;
        if(r>no)
        a--;
    }        
    return 0;
}

// o/p
// Enter no: 5
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *