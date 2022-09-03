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

        ll n;
        cin >> n;
        ll a, b;
        ll r, count = 0;
        ll lcm;
        ll gcd;

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            for (ll i = 1; i <= n; i++)
            {
                for (ll j = 1; j <= n; i++)
                {
                    a = i;
                    b = j;
                    ll gcd;
                    if (b > a)
                    {
                        int temp = b;
                        b = a;
                        a = temp;
                    }

                    for (int i = 1; i <= b; ++i)
                    {
                        if (a % i == 0 && b % i == 0)
                        {
                            gcd = i;
                        }
                    }
                    ll lcm;
                    lcm = (a * b) / gcd;

                    r = lcm / gcd;
                    if (r <= 3)
                    {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}