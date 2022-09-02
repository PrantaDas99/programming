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
    ll a,b,c;
    cin>>a>>b>>c;
    ll r0,r1,r2,r3,r4,r5,r6;
    r0=(a+b)*c;
    r1=a+(b*c);
    r2=(a*b)+c;
    r3=a*(b+c);
    r4=a*b*c;
    r5=(a*b)*c;
    r6=a*(b*c);
    cout<<max(r0, max(r1, max(r2, max(r3,max(r4,max(r5,r6))) )));

 
    return 0;
}