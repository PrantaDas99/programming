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
    for (ll i = 1; i <= t; i++)
    {
         ll a,b,c;
        cin>>a>>b>>c;
        ll res=a+b+c;
        if (res%3==0)
        {
            cout<<"Case"<<" "<<i<<":"<<" "<<"Peaceful"<<endl;
        }
        else
        {
            cout<<"Case"<<" "<<i<<":"<<" "<<"Fight"<<endl;
        }
    }
    
       
        

 
    return 0;
}