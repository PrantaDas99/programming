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
    while (1)
    {
        int arr[100],k,i=0,count=0;
        while (cin>>arr[i])
        {
            i++;
        }
        while (arr)
        {
            count++;
        }
        
        
        cin>>k;
        for (int  i = 0; i < count-1; i++)
        {
            for (int  j = 1; j < count; j++)
            {
               if (arr[i]+arr[j]==k)
               {
                cout<<i<<" "<<j;
                break;
               }
               
            }
            
        }
        
    }
    
    return 0;
}