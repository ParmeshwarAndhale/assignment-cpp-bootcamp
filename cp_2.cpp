#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of Array"<<endl;
    int n;
    cin>>n;
    int a[n];
    int i,j,temp=0,mul=1,result,cnt=0;
    cout<<"Enter the Actual Elements of Array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            temp=1;
            cnt++;
           // cout<<"temp for loop called"<<endl;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
           // cout<<"for called for mul"<<endl;
            mul=mul*a[i];
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(temp==1)
        {
            if(cnt<=1)
            {
        if(a[i]==0)
        {
            a[i]=mul;
        }
        else a[i]=0;
        }
        else
        {
            a[i]=0;
        }
        }
        else
        {
            result=mul/a[i];
            a[i]=result;
        }
        cout<<a[i]<<" ";
    }
}