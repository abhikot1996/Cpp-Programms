# include<iostream>
using namespace std;

int main()
{
    char choice;
    float a,b;
    while(1){
    cout<<"Enter choice between '+' or '-' or '*' or '/' or E(exit): ";
    cin>>choice;
    if(choice=='+'||choice=='-'||choice=='*'||choice=='/')
    {cout<<"Enter 1st no: ";
    cin>>a;
    cout<<"Enter 2nd no: ";
    cin>>b;}  

    switch(choice)
    {
        case '+':        
        cout<<"sum is: "<<a+b<<endl;
        break;

        case '-':
        cout<<"Subtraction is: "<<a-b<<endl;
        break;

        case '*':       
        cout<<"Multiplication is: "<<a*b<<endl;
        break;

        case '/':
        cout<<"Division is: "<<a/b<<endl;
        break;

        case 'E':
        exit(0);

        default:
        cout<<endl<<"Wrong choice"<<endl;
        break;
    }
    }
    return 0;
}