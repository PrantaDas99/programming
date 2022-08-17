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
        ll n,d;
        cin>>n>>d;
        ll arr[n];

        for (ll i = 0; i <n; i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        ll sum=arr[0]+arr[1];

        if(sum<=d || arr[n-1]<=d)
        {
            yes
        }
        else
        {
            no
        }
    }
 
    return 0;
}