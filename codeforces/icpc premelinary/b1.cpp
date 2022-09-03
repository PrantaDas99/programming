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
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        int a, b, c, k, big, mid, low, count = 0, l, m, n;
        cin >> a >> b >> c >> k;
        ll res1 = (a + b + c) % 3;
        ll res = (a + b + c) / 3;
        if (res1 != 0)
        {
            cout << "Case"
                 << " " << i << ":"
                 << " "
                 << "Fight" << endl;
        }
        else
        {
            int x[3] = {a, b, c};
            sort(x, x + 3);
            big = x[0];
            mid = x[1];
            low = x[2];

            while (big != res)
            {
                if (big > res)
                {
                    big -= k;
                    if (big == res)
                    {
                        count++;
                        break;
                    }
                }
                else
                {
                    big += k;
                    if (big == res)
                    {
                        count++;
                        break;
                    }
                }
            }
            while (mid != res)
            {
                if (mid > res)
                {
                    mid -= k;
                    if (mid == res)
                    {
                        count++;
                        break;
                    }
                }
                else
                {
                    mid += k;
                    if (mid == res)
                    {
                        count++;
                        break;
                    }
                }
            }
            while (low != res)
            {
                if (low > res)
                {
                    low -= k;
                    if (low == res)
                    {
                        count++;
                        break;
                    }
                }
                else
                {
                    low += k;
                    if (low == res)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        if (count == 3)
        {
            cout << "Case"
                 << " " << i << ":"
                 << " "
                 << "Peaceful" << endl;
        }
        else
        {
            cout << "Case"
                 << " " << i << ":"
                 << " "
                 << "Fight" << endl;
        }
    }

    return 0;
}