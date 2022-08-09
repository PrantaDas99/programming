#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    int a[4],count=0;
    for (int  i = 0; i <4; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i < 4; i++)
    {
        if(a[0]<a[i])
        count++;
    }
    cout<<count<<endl;
    }
    return 0;
    
}