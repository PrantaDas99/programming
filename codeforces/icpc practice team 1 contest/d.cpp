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
    if (n>2)
    {
        if(n%2==0)
    {
        yes;
    }
    else{
        no;
    }
    }
    else
    {
        no;
    }
    
 
    return 0;
}