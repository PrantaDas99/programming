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
    // freopen("input.txt","r",stdin);
    ll test = 1, n, temp, chk = 0, cnt = 0;
    cin >> test;
    getchar();
    string str;
    while (test--)
    {
        ll n, q;
        ll ans;
        cin >> n >> q;
        for (ll i = 0; i < q; i++)
        {
            ll a, b, c, d;
            
            cin >> a >> b >> c >> d;
            for (ll i = 0; i < n; i++)
            {
                ll r1, r2;
                cin >> r1 >> r2;
            
            if (a < r1 && b < r2 && c > r1 && d > r2)
            {
                ans += (r1 * r2);
            }
            
            
            }
        }
        cout << ans << endl;
    }

    return 0;
}