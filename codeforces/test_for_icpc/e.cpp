#include<iostream>
using namespace std;
int main()
{
    while (1)
    {
        int n,ans=0;
        cin>>n;
        
            int a;
            for (int i = 0; i < n; i++)
            {
                cin>>a;
                ans=ans+a;
            }
    
        cout<<ans<<endl;
        
    }
    return 0;
    
}