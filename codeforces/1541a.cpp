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
        int n;
        cin >> n;
        int a[n];
        int x = -1, y = 1, z = -1, v = 0;
        if (n == 2)
        {
            a[0] = 2;
            a[1] = 1;
        }

        else if (n % 2 == 0 && n > 2)
        {

            for (ll i = n / 2; i < n; i++)
            {
                a[i] = x + 2;
                x = a[i];
            }
            for (ll i = (n / 2) - 1; i >= 0; i--)
            {
                a[i] = y + 2;
                y = a[i];
            }
        }
        else if (n == 1)
        {
            a[0] = 1;
        }

        else if (n == 3)
        {
            a[0] = 3;
            a[1] = 1;
            a[2] = 2;
        }

        else
        {
            for (ll i = (n / 2); i >= 0; i--)
            {
                a[i] = z + 2;
                z = a[i];
            }
            for (ll i = (n / 2) + 1; i < n; i++)
            {
                a[i] = v + 2;
                v = a[i];
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}