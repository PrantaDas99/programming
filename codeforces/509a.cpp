#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=1;
    }
    for (int i = 1; i < n-1; i++)
    {
        a[i+1]=a[i-1]+a[i];
    }
    cout<<a[n-1];
    return 0;
    
    
}