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
    ll n, x;
    cin >> n >> x;
    char c;
    int a, d = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> c >> a;
        if (c == '+')
        {
            x=x + a;
        }
        else
        {
            if (x >= a)
            {
                x = x - a;
            }
            else
            {
                d++;
            }
        }
    }
    cout << x << " " << d;

    return 0;
}