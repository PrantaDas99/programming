// Add some code
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "Case " << i << ":"
             << " ";
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}