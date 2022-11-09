#include<iostream>
using namespace std;

int main()
{
    for (int i = 100; i >=1; --i)
    {
        if (i<100 && i%5==0)
        {
            cout<<endl;
            cout<<i<<" ";
        }
        else
        cout<<i<<" ";
        
    }
    
    return 0;
}