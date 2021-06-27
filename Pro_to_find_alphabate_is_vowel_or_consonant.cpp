# include<iostream>
using namespace std;

int main()
{
    char alphabate;
    cout<<"Enter alphabate: ";
    cin>>alphabate;
    
    switch(alphabate)
    {
        case 'a':
        cout<<"a is vowel.";
        break;

        case 'e':
        cout<<"e is vowel.";
        break;

        case 'i':
        cout<<"i is vowel.";
        break;

        case 'o':
        cout<<"o is vowel.";
        break;

        case 'u':
        cout<<"u is vowel.";
        break;

        default:
        cout<<alphabate<<" is consonant";
        break;


    }
    return 0;
}