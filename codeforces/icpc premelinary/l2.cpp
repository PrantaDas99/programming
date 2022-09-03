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

ll l, w;
double findDistance(double c, double a)
{
    double b = sqrt(c * c - a * a);
    return (w - b) + (2 * c);
}

int main()
{
    double test = 1, n, m, temp, chk = 0, cnt = 0, ans;
    while (test--)
    {
        cin >> l >> w;
        if (l == 0 || w == 0)
        {
            return 0;
        }
        else
        {
            n = l / 2.0;
            m = l - (l / 2.0);
            double mind = findDistance(n, m);
            double i = 0;
            while (i < (l / 2))
            {
                i += 0.00001;
                n = (l / 2.0) + i;
                m = (l - ((l / 2.0) + i));
                temp = (findDistance(n, m));
                if (temp < mind)
                {
                    mind = temp;
                }
                else
                    break;
            }
            printf("%.4f\n", mind);
        }
    }

    return 0;
}