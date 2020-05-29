#include<iostream>
using namespace std;
bool ifpossible(int stalls[],int n,int cows,int dist)
{
    int c=stalls[0];
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(stalls[i]-c>=dist)
        {
            c=stalls[i];
            cnt++;
        }
        if(cnt==cows)
          return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int stalls[n];
    for(int i=0;i<n;i++)
       cin>>stalls[i];
     int cows;
     cin>>cows;
     int s=0;
     int e=stalls[n-1]-stalls[0];
     int ans=0;
     while(s<=e)
     {
         int mid=(s+e)/2;
         bool check=ifpossible(stalls,n,cows,mid);
         if(check)
         {
             ans=mid;
             s=mid+1;
         }
         else
         {
             e=mid-1;
         }
     }
     cout<<ans;
    return 0;
}