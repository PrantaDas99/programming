#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int n,int m){
    if(m == 0){
        return n;
    }
    else return gcd(m,n%m);
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      int n,m;
      cin >> n>>m;
      int ans = gcd(n,m);
      cout << ans << endl; 
    }
    return 0;
    
}