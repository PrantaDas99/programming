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
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[1]==a[2])
        {
            yes
            cout<<a[2]<<" "<<a[0]<<" "<<a[0]<<endl;

        }
        else
        {
            no
        }
        
    }
 
    return 0;
}