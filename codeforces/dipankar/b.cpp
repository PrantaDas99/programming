#include <bits/stdc++.h>
using namespace std;
int main() {
   int test;
   cin>>test;
   while (test--)
   {
    int a, b, i, j, flag;
   cin>>a>>b;
   for (i = a; i <= b; i++) {
      if (i == 1 || i == 0)
      continue;
      flag = 1;
      for (j = 2; j <= i / 2; ++j) {
         if (i % j == 0) {
            flag = 0;
            break;
         }
      }
      if (flag == 1)
      cout << i <<endl;;
   }
   }
   cout<<endl;
   return 0;
   
}