#include<iostream>
using namespace std;
int main()
{
    while (1)
    {
        int n,a,ans=0;
        cin>>n;
    
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            ans=ans+a;
        }
        cout<<ans;
        
    }
    return 0;
}