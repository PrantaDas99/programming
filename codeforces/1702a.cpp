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
        int n, ans, r;
        cin >> n;
        if (n <= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (ll i = 0; i < 10; i++)
            {
                ans = pow(10, i);
                if (ans >= n)
                {
                    r = n - pow(10, i - 1);
                    break;
                }
            }
            cout << r << endl;
        }
    }

    return 0;
}
