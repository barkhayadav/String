#include<iostream>
#include<string.h>
using namespace std;

//finding and counting the number of repeating letters in a sentence

int main()
{
    char ch[]="madam";
    int n=strlen(ch);
    int h[26]={0};
    for(int i=0;i<n;i++)
    {
        h[ch[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(h[i]>1)
        {
            cout<<char(i+97)<<" is repeating "<<h[i]<<" times."<<endl;
        }
    }
}