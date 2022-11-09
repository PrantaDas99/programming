#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define ui unsigned int
#define pi acos(-1)
#define clr(ar) memset(ar, 0, sizeof(ar))
#define MAX = 9223372036854775807
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main()
{
        ll a, b;
        cin >> a >> b;
        int ans=1;
        for (int i = 1; i <=min(a,b); i++)
        {
            ans*=i;
        }
        cout<<ans<<endl;
        
    return 0;
}