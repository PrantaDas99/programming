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
    
    while(1){
        ll n,k,b=2;
        cin>>n>>k;
        ll count=3;
        if (n==1)
        {
            cout<<1<<endl;
        }
        else if(n==2)
        {
            cout<<3<<endl;
        }
        else{
            for (ll i = 2; i < n; i++)
            {
                count=count+(b*2);
                b=i*2;
            }
            cout<<count<<endl;
        }
        
        
    }
    
 
    return 0;
}