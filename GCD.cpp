#define ll long long
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
    ll t;
    cin>>t;
    while (t--)
    {
      ll n,m;
      cin >> n>>m;
      ll ans = gcd(n,m);
      cout << ans << endl; 
    }
    return 0;
    
}