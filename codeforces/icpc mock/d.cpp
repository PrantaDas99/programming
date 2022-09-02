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
    while (test--)
    {
        ll n;
        cin >> n;

        ll a, b, c;
        if (n < 10)
        {
            cout << n / 3<<endl;
        }

        else
        {
            a = n / 3;
            b = ((n / 2) - 1) - a;
            c = (n / 2) - a - 2;
            cout << a + b + c << endl;
        }
    }

    return 0;
}