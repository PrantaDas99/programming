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
        int a, b, c;
        cin >> a >> b >> c;
        if (b + c == a)
        {
            yes;
        }
        else if (a + c == b)
        {
            yes;
        }
        else if (a + b == c)
        {
            yes;
        }
        else if (a == b && c % 2 == 0)
        {
            yes;
        }
        else if (a == c && b % 2 == 0)
        {
            yes;
        }
        else if (b == c && a % 2 == 0)
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