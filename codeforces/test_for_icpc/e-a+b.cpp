#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;

     if (n!=0)
    {
         for (int  i = 0; i < n; i++)
    {
       int a[n];
       for (int i = 0; i < n; i++)
       {
        cin>>a[i];
       }
       for (int i = 0; i < n; i++)
       {
        ans=ans+a[i];
       }
       
       cout<<ans<<endl;
       
    }
    }
    
    return 0;
   
}