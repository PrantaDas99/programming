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
        ll a,count=0,r;
       cin>>a;
       if (a>1000)
       {
        cout<<"NO";
       }
       else{
        for (ll i = 1; i <=a; i++)
       {
        r=a/i;
        if (a-(r*i)==0)
        {
            count++;
        }
        
       }
       if (count==3)
       {
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
       }
       
 
    return 0;
}
