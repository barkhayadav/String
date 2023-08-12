#include<iostream>
#include<string>
using namespace std;

//reversing a string

int main()
{
    string str="barkha yadav";
    int n=str.length()-1;
    int i=0;
    while(i<=n)
    {
        swap(str[i],str[n]);
        i++;
        n--;
    }
    cout<<str<<endl;
}
