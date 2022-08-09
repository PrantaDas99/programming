#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int mina=999999999,minb=999999999;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mina=min(mina,a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            minb=min(minb,b[i]);
        }
        int s=0;

        for (int i = 0; i < n; i++)
        {
            s+=max(a[i]-mina,b[i]-minb);
        }
        cout<<s<<"\n";
    }
        

    return 0;
}