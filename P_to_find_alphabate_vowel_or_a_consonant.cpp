# include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter alphabet: ";
    cin>>c;

    char islowercasevowel, isUppercasevowel;

    islowercasevowel = (c=='a'|| c=='e'||c=='i'||c=='o'||c=='u') ;
    isUppercasevowel = (c=='A'|| c=='E'||c=='I'||c=='O'||c=='U') ;

    if (islowercasevowel || isUppercasevowel)
    {
        cout<<c<<" is Vowel"<<endl;
    }
    else
    {
        cout<<c<<" is Consonant"<<endl;
    }
 
    return 0;
}