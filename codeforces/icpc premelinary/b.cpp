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
    for (ll i = 1; i <=t; i++)
    {
        ll a,b,c,k,count=0;
        cin>>a>>b>>c>>k;
        ll r=(a+b+c)/3;
        if((a+b+c)%3==0)
        {
            if (a>r)
            {
                ll y=a-r;
                if(y%k==0)
                {
                   count++;
                }
                
            }
            else{
                ll x=r-1;
                if(x%k==0)
                {
                    count++;
                }
            }
             if (b>r)
            {
                ll e=a-r;
                if(e%k==0)
                {
                   count++;
                }
                
            }
            else{
                ll f=r-1;
                if(f%k==0)
                {
                    count++;
                }
            }
             if (c>r)
            {
                ll g=a-r;
                if(g%k==0)
                {
                   count++;
                }
                
            }
            else{
                ll h=r-1;
                if(h%k==0)
                {
                    count++;
                }
            }
            
            if (count=3)
            {
               cout<<"Case"<<" "<<i<<":"<<" "<<"Peaceful"<<endl;
            }
            else
            {
                cout<<"Case"<<" "<<i<<":"<<" "<<"Fight"<<endl;
            }
        }
        else
        {
            cout<<"Case"<<" "<<i<<":"<<" "<<"Fight"<<endl;
        }
    }
    
 
    return 0;
}