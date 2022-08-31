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
    ll n, k;
    cin >> n >> k;
    int a[n];
    if (n % 2 == 0)
    {
        for (ll i = 1; i <= n; i++)
        {

            if (i % 2 != 0)
            {
                for (ll j = 0; j < n / 2; j++)
                {
                    a[j] = i;
                }
            }
            else
            {
                for (ll j = (n / 2) + 1; j < n; j++)
                {
                    a[j] = i;
                }
            }
        }
    }
    else
    {

        for (ll i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                for (ll j = 0; j < (n / 2) + 1; j++)
                {
                    a[j] = i;
                }
            }
            else
            {
                for (ll j = (n / 2) + 2 + 1; j < n; j++)
                {
                    a[j] = i;
                }
            }
        }
    }

    cout << a[k - 1];

    return 0;
}