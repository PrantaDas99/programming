#include<iostream>
using namespace std;
int main()
{
    int n,i,qt,count=0,temp,sq=0,bt[10],wt[10],tat[10],rem_bt[10];
    float awt=0,atat=0;

    cout<<"Enter the number of process :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Bust time for process p",i;
        cin>>bt[i];
        rem_bt[i]=bt[i];
    }
    cout<<"Enter Quantam time";
    cin>>qt;
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp = qt;
            if(rem_bt[i]==0)
            {
                count++;
                continue;
            }
            if(rem_bt[i]>qt)
                rem_bt[i]=rem_bt[i]-qt;
            else
                if(rem_bt[i]>=0)
                {
                    temp=rem_bt[i];
                    rem_bt[i]=0;
                }
                sq=sq+temp;
                tat[i]=sq;
        }
        if(n==count)
            break;
    }
    cout<<"\n\tPROCESS\t BURST TIME \t WAITING TIME\tTURNAROUND TIME\n";
   for (int i = 0; i < n; i++)
   {

   }
   return 0;
}