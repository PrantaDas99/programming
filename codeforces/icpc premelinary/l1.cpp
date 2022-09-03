#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int l, w;
    double f;

   while(cin >> l >> w)
   {
        if (l == 0 && w == 0)
            return 0;

        f = sqrt(2 * l * l);

        cout<< f + w << "\n";
    }
 
    return 0;
}