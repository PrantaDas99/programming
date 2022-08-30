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
        ll n, count = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 'R' && b[i] == 'R')
            {
                count++;
            }
            
            else if (a[i] == 'B' || a[i] == 'G')
            {
                if (b[i] == 'B' || b[i] == 'G')
                {
                    count++;
                }
            }
            else
            {
                break;
            }
        }
        if (count == n)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}