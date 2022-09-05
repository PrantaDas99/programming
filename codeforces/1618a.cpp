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
        int b[7],count=0;
       for (ll i = 0; i < 7; i++)
       {
        cin>>b[i];
       }
       
        sort(b,b+7);
        cout<<b[0]<<" "<<b[1]<<" "<<b[6]-b[0]-b[1]<<endl;
    }
 
    return 0;
}