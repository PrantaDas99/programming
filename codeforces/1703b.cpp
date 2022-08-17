#include<bits/stdc++.h>
#include<map>
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char , int>p;
        for (auto i:s)
        {
            p[i]+=1;
        }
        int ans=(p.size()*2)+(s.size()-p.size());
        cout<<ans<<endl;
        
    }
 
    return 0;
}