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
        ll n,x,mn,mx,count=0;
        vector<long long int>vec1;
        cin>>n;
        for (ll i = 0; i < n; i++)
        {
            cin>>x;
            vec1.push_back(x);

        }
        for (ll i = 0; i < n-1; i++)
        {
            mx=max(vec1[i],vec1[i+1]);
            mn=min(vec1[i],vec1[i+1]);

            while (mn*2<mx)
            {
                count++;
                mn*=2;
            }
            
        }
        
        cout<<count<<endl;
    }
 
    return 0;
}