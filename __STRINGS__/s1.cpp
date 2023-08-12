#include<iostream>
#include<string>
using namespace std;

//changing cases- upper case to lower case and vice versa

int main()
{
    string str="step IN TO THE world OF domination";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout<<str;
}