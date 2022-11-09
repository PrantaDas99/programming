#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ans=2;
  for (int  i = 2; i <=64; i++)
  {
    ans=pow(ans,2);
  }
  cout<<ans;
  return 0;  
  
}