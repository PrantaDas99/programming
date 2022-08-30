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
    cin>>s;
    if(s[8]=='P' && s[9]=='M')
    {
        if(s[0]!=1)
        {
            s[0]=s[0]+1;
            s[1]=s[1]+2;
            cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7];
        }
        else{
            cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7];
        }
    }
    else
    {
        if(s[0]=='1')
        {
            s[0]=0;
            s[1]=0;

            cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7];
        }
        else
        {
            cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7];
        }
    }
 
    return 0;
}