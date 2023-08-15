#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number"<<endl;
    int i,m,n,sum=0,temp;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        m=n%10;
        sum=(sum*10)+m;
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<temp<<" is Palindrome Number"<<endl;
    }
    else
    cout<<temp<<" is Not Palindrome Number"<<endl;
}