#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ull unsigned long long
#define ui unsigned int
#define pi acos(-1)
#define clr(ar) memset(ar,0,sizeof(ar))
#define MAX = 9223372036854775807
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
 
int main()
{
   string s;
   int count=0,n;
   cin>>n;
   cin>>s;
   for (int  i = 0; i <s.size(); i++)
   {
    if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
    {
        count++;
    }
   }
   
 cout<<count<<endl;
    return 0;
}
