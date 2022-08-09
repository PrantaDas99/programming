#include<iostream>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int count=0;
        for (int i = 0; i <n; i++)
        {
            int a[2];
            for (int i = 0; i < 2; i++)
            {  
            cin>>a[i];
            if (a[i]<0)
            {
                count=count-a[i];

            }
            else{
                count=count+a[i];
            }
            
            }
            

        }
        cout<<count*2<<endl;
        
    }
    return 0;
    
}