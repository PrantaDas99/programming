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
    //freopen("input.txt","r",stdin);
    ll test = 1, n , temp, chk = 0, cnt = 0;
    cin >> test;
    getchar();
    string str;
    while(test--){
        ll n;
        cin>>n;
        int h1,h2,h3;
        h1=n/3;
        h2=h1;
        h3=h1;
        ll x=n%3;
        x=x+3;
        h1--;
        h2--;
        h3--;
        if(x==3)
        {
            h1=h1+2;
            h2=h2+1;
        }
        else if(x==4)
        {
            h1+=3;
            h2+=1;
        }
        else if(x==5)
        {
            h1+=3;
            h2+=2;
        }
        cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }
 
    return 0;
}