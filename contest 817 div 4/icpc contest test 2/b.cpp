#include <bits/stdc++.h>
#include <iomanip>
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
    ll n, a[n], p = 0, ne = 0, z = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            ne++;
        }
        else if (a[i] > 0)
        {
            p++;
        }
        else
        {
            z++;
        }
    }
    double j = (double)p / (double)n;
    double k = (double)ne / (double)n;
    double l = (double)z / (double)n;
    cout << fixed << setprecision(6) << j << endl;
    cout << fixed << setprecision(6) << k << endl;
    cout << fixed << setprecision(6) << l << endl;

    return 0;
}