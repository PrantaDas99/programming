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
    ll test = 1, n, temp, chk = 0, cnt = 0;
    cin >> test;
    getchar();
    string str;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (n == 2)
        {
            if (a[0] == a[1])
            {
                yes;
            }
            else
            {
                no;
            }
        }
        else
        {
            int check = 2;
            for (int i = 0; i < n - 2; i++)
            {
                if (a[i] == a[i + 2])
                {
                    check++;
                    i++;
                }
            }
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i] == a[i + 2])
                {
                    check++;
                    i++;
                }
            }

            if (check == n)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }

    return 0;
}