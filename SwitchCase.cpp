# include <iostream>
using namespace std;

int main()
{
    char button;
    while(1)
    {cout<<"Enter button: ";
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Hello"<<endl;
        break;

        case 'b':
        cout<<"Namaskar"<<endl;
        break;

        case 'c':
        cout<<"Namaste"<<endl;
        break;
        
        case 'd':
        cout<<"Hola"<<endl;
        break;

        default:
        cout<<"I am still learning"<<endl;
        break;
    }
    }
    // if(button=='e')
    // {cout<<"Hello"<<endl;}
    // else if(button =='d')
    // {cout<<"Namskar"<<endl;}
    // else if(button=='c')
    // {cout<<"Namaste"<<endl;}
    // else
    // {cout<<"I am still learning."<<endl;}
    
    return 0;
}