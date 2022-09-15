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
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        ll answer = abs(x1 - x2) + abs(y1 - y2);
        if (y1 == y2 && y1 == y3)
        {
            if (x3 >= min(x1, x2) && x3 <= max(x1, x2))
            {
                answer += 2;
            }
        }
        else if (x1 == x2 && x1 == x3)
        {
            if (y3 >= min(y1, y2) && y3 <= max(y1, y2))
            {
                answer += 2;
            }
        }
        cout << answer << endl;
    }

    return 0;
}
