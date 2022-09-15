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
    ll count = 0;
    string s;
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        for (ll j = i + 1; j < s.size(); j++)
        {
            for (ll k = j + 1; k < s.size(); k++)
            {
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}