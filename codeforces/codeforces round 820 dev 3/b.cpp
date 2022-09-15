#include<bits/stdc++.h>
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
    //freopen("input.txt","r",stdin);
    ll test = 1, n , temp, chk = 0, cnt = 0;
    cin >> test;
    getchar();
    string str;
    while(test--){
        ll n,ans=0;
        cin>>n;

        string s;
        for (ll i = 0; i < n; i++)
        {
           cin>>s[i];
        }
        

        for (ll i = 0; i < n; i++)
        {
            if (s[i]>0 && s[i+2]==0)
            {
              if (s[i]==1 && s[i+1]==0)
              {
                printf("j");
              }
              else if (s[i]==1 && s[i+1]==1)
              {
                printf("k");
              }
              else if (s[i]==1 && s[i+1]==2)
              {
                printf("l");
              }
              else if (s[i]==1 && s[i+1]==3)
              {
                printf("m");
              }
              else if (s[i]==1 && s[i+1]==4)
              {
                printf("n");
              }
              else if (s[i]==1 && s[i+1]==5)
              {
                printf("o");
              }
              else if (s[i]==1 && s[i+1]==6)
              {
                printf("p");
              }
              else if (s[i]==1 && s[i+1]==7)
              {
                printf("q");
              }
              else if (s[i]==1 && s[i+1]==8)
              {
                printf("r");
              }
              else if (s[i]==1 && s[i+1]==9)
              {
                printf("s");
              }
              else if (s[i]==2 && s[i+1]==0)
              {
                printf("t");
              }
              else if (s[i]==2 && s[i+1]==1)
              {
                printf("u");
              }
              else if (s[i]==2 && s[i+1]==2)
              {
                printf("v");
              }
              else if (s[i]==2 && s[i+1]==3)
              {
                printf("w");
              }
              else if (s[i]==2 && s[i+1]==4)
              {
                printf("x");
              }
              else if (s[i]==2 && s[i+1]==5)
              {
                printf("y");
              }
              else if (s[i]==2 && s[i+1]==6)
              {
                printf("z");
              }
              i+=2;
               
            }
            else 
            {
                if (s[i]==1)
              {
                printf("a");
              }
              else if (s[i]==2)
              {
                printf("b");
              }
              else if (s[i]==3)
              {
                printf("c");
              }
              else if (s[i]==4)
              {
                printf("d");
              }
              else if (s[i]==5)
              {
                printf("e");
              }
              else if (s[i]==6)
              {
                printf("f");
              }
              else if (s[i]==7)
              {
                printf("g");
              }
              else if (s[i]==8)
              {
                printf("h");
              }
              else if (s[i]==9)
              {
                printf("i");
              }
              else if (s[i]==10)
              {
                printf("j");
              }
              else if (s[i]==11)
              {
                printf("k");
              }
              else if (s[i]==12)
              {
                printf("l");
              }
              else if (s[i]==13)
              {
                printf("m");
              }
              else if (s[i]==14)
              {
                printf("n");
              }
              else if (s[i]==15)
              {
                printf("o");
              }
              else if (s[i]==16)
              {
                printf("p");
              }
              else if (s[i]==17)
              {
                printf("q");
              }
              else if (s[i]==18)
              {
                printf("r");
              }
              else if (s[i]==19)
              {
                printf("s");
              }
              else if (s[i]==20)
              {
                printf("t");
              }
              else if (s[i]==21)
              {
                printf("u");
              }
              else if (s[i]==22)
              {
                printf("v");
              }
              else if (s[i]==23)
              {
                printf("w");
              }
              else if (s[i]==24)
              {
                printf("x");
              }
              else if (s[i]==25)
              {
                printf("y");
              }
              else if (s[i]==26)
              {
                printf("z");
              }
              i++;
               
            }
            
        }
        
    }
    cout<<endl;
 
    return 0;
}