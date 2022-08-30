#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;

        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            ans+=a;
        }

        cout << ans << endl;
        cout << endl;
    }
    return 0;
}