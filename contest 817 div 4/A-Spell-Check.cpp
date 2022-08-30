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
        string s;
        cin >> s;
        int count = 0;

        if (n == 5)
        {
            for (ll i = 0; i < 5; i++)
            {
                if (s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
                {
                    count++;
                }
                else
                    break;
            }
        }

        if (count == 5)
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