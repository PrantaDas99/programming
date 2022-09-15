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
    while (1)
    {
        ll n, ans = 0, r = 0, p = 0;
        cin >> n;
       char s;
        for (size_t i = 0; i < n; i++)
        {
            cin >> s;
            if (s[0] == 0 && s[1] == 0)
            {
                ans = 1;
                r = i;
                p = 1;
                break;
            }
            else if (s[3] == 0 && s[4] == 0)
            {
                ans = 1;
                r = i;
                p = 2;
                break;
            }
        }
        if (ans == 1)
        {
            cout << "YES" << endl;
            for (ll i = 0; i < n; i++)
            {
                if (i == r)
                {
                    for (ll i = 0; i < 5; i++)
                    {
                        if (p == 1)
                        {
                            if (i==0 || i==1)
                            {
                                cout<<'+';
                            }
                            
                            else{
                                cout<<s[i];
                            }
                            
                        }
                        else if (p==2)
                        {
                           if (i==3 || i==4)
                           {
                            cout<<'+';
                           }
                           else
                           {
                            cout<<s[i];
                           }
                           
                           
                           
                        }
                        

                        else
                        {
                            cout << s[i];
                        }
                    }
                }
                else
                {
                    cout << s[i];
                }
            }
            cout << endl;
        }
        else
        {
            no;
        }

        return 0;
    }
}