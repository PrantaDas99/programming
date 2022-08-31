#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ull unsigned long long
#define ui unsigned int
#define pi acos(-1)
#define clr(ar) memset(ar,0,sizeof(ar))
#define MAX = 9223372036854775807
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
 
int main()
{
    ll n;
    cin>>n;
    ll a[n][n],d1=0,d2=0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
           cin>>a[i][j];
        }
        
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
           if(i==j)
           {
            d1=d1+a[i][j];
           }
        }
        
    }
    for (ll i=0;i<n;i++)
    {
     for (ll j = 0;  j<n; j++)
     {
        if ((i+j)==n-1)
        {
            d2=d2+a[i][j];
        }
        
     }
     
    }
    
    
    cout<<abs(d1-d2);
    
    
 
    return 0;
}