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
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    int x;
    cin>>x;
    int b[x];
    for (int  i = 0; i < x; i++)
    {
        cin>>b[i];
    }
    int count=0;
    for (int  i = 0; i < x; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if (b[i]>a[j] || b[i]==a[j])
            {
               count++;
            }
            
        }
        cout<<count<<endl;
        
    }
    count==0;
    
    
 
    return 0;
}