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
    ll n,k;
    cin>>n>>k;
    string s,s1;
    cin>>s;
        for (ll i = 1; i <=k; i++)
        {
            for (ll j = 0; j < n; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s1[j]='G';
                s1[j+1]='B';
                j++;
            }
            else
            {
                s1[j]=s[j];
                s1[j+1]=s[j+1];
                j++;
            }
        }
        }
        
        for (ll i = 0; i < n; i++)
        {
            cout<<s1[i];
        }
        

    return 0;
}