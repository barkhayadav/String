#include<iostream>
#include<string>
using namespace std;

//comparing two strings

int main()
{
    string str1="madam";
    string str2="madem";
    if(str1.length()!=str2.length())
    {
        cout<<"The given strings are not identical!";
    }
    else{
        int flag=0;
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]!=str2[i])
            {
               flag=1;
            }
        }
        if(flag==1)
        {
           cout<<"The given strings are not identical!";
        }
        else{
           cout<<"The given strings are identical!";
        } 
    }
}