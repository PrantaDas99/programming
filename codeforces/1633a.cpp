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
        string n;
        int ans;
        cin>>n;

      
        if(n[0]==0)
        {
            n[0]=1;
        }
       ans=stoi(n);
        while (ans%7!=0)
        {
            ans++;
        }
        cout<<ans<<endl;
        
    }
 
    return 0;
}