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
        ll a;
        cin>>a;
        int temp=a, rev=0;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    if (rev == a)
    {
        cout<<a;

    }
    else
    {
        no;
    }
    }
 
    return 0;
}