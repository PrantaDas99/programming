#include<bits/stdc++.h>
#include<math.h>
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
   
    while(1){
        int l,w,temp=1,y,x;
        cin>>l>>w;
        for (ll i = 0; i <l/2; i++)
        {
          x=(l/2)*0.8;
          y=(l/2)*0.6;
        }
        cout<<fixed <<setprecision(4)<<(l*2)+(w-x-y)<<endl;
        
    }
 
    return 0;
}