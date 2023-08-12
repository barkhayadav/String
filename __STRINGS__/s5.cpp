#include<iostream>
#include<string>
using namespace std;

//checking if a given string is palindrome

int main()
{
    string str="madame";
    string reverseStr="";
    int n=str.length()-1;
    for(int i=n;i>=0;i--)
    {
        reverseStr+=str[i];
    }
    int flag=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=reverseStr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Palindrome!"<<endl;
    }
    else{
        cout<<"Not Palindrome!"<<endl;
    }
}