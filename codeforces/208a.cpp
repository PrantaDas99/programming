#include<bits/stdc++.h>
#include<string.h>
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
        string str;
        cin>>str;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
            {
                cout<<" ";
                 i=i+2;
            }
            else
            {
                cout<<str[i];
            }
        }
 
    return 0;
}