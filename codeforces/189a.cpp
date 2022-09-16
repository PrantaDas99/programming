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
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if (a+b+c==n)
    {
        cout<<3;
    }
    else if(a+b==n)
    {
       cout<<2;
    }
     else if(a+c==n)
    {
       cout<<2;
    }
     else if(c+b==n)
    {
       cout<<2;
    }
    else if (a==n || b==n || c==n)
    {
        cout<<1;
    }
    else if (n%a==0)
    {
        cout<<n/a;
    }
    else if (n%b==0)
    {
        cout<<n/b;
    }
    else if (n%c==0)
    {
        cout<<n/c;
    }
    else if (n%(a+b)==0)
    {
        cout<<n/(a+b);
    }
    else if (n%(a+c)==0)
    {
        cout<<n/(a+c);
    }
    else if (n%(c+b)==0)
    {
        cout<<n/(c+b);
    }
    else if (n%(a+b+c)==0)
    {
        cout<<n/(a+b+c);
    }
    else
    {
        cout<<n;
    }
    
    
    
    
 
    return 0;
}