#include<bits/stdc++.h>
using namespace std;
int findmin(int n,int *ans)
{
    if(n==1 || n==0)
       return ans[n]=n;
    int mi=INT_MAX;
    for(int i=1;(i*i)<=n;i++)
    {
        if(ans[n-i*i]==-1)
           ans[n-i*i]=findmin(n-i*i,ans);
        mi=min(mi,1+ans[n-i*i]);
    }
    return mi;
}
int main()
{
    int n;
    cin>>n;
    int *ans=new int[n+1];
    for(int i=0;i<n;i++)
    {
        ans[i]=-1;
    }
    cout<<findmin(n,ans);
    return 0;
}