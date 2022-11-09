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
        int n, x, temp = 0;
        cin >> n >> x;
        int a[n], b[x];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < x; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < x; i++)
        {
            if (b[i] == 0)
            {
                printf("0 ");
            }
            else if (b[i] == 1)
            {
                printf("1 ");
            }

            else
            {
                for (int j = 0; j < n; j++)
                {
                    if (b[i] > a[j])
                    {
                        temp = temp + a[j];
                    }
                }
            }
            cout<<temp<<" ";
        }
        cout<<endl;
    }

    return 0;
}