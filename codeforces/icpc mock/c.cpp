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
  
    ll t;
    cin>>t;
    for (ll i = 0; i < t; i++)
    {
       ll n,s=0,m=0;
     cin>>n;
     --n;
     while (n--)
     {
        ll a,b;
        cin>>a>>b;

        s+=a;
        s-=b;
        if (m<s)
        {
            m=s;
        }
     }
     cout<<"Case"<<" "<<i+1<<" "<<m<<endl;
    }
    
    return 0;
}