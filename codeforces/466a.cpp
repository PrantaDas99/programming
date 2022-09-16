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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int r = n * a;
    int v = n / m;
    if (n % m == 0)
    {
        if (v * b <= r)
        {
            cout << v * b;
        }
        else
        {
            cout << r;
        }
    }
    else
    {
        if ((v * b) + ((n - (v * m)) * a) <= r)
        {
            int x = (n % m) * a;
            if (x > b)
            {
                cout << (v * b) + b;
            }
            else
            {
                cout << (v * b) + ((n - (v * m)) * a);
            }
        }
    }

    return 0;
}