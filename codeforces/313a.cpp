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
    char a;
   string s;
   cin>>a>>s;
   if(a=='-')
   {
    if (s[s.size()==0])
    {
        cout<<a;
        for (ll i = 0; i < s.size()-1; i++)
        {
           if(i==s.size()-1)
           {
            cout<<s[s.size()];
           }
           else
           {
            cout<<s[i];
           }
        }
        
    }
    
   }
   else
   {
    cout<<s;
   }
    return 0;
}