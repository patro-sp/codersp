#include<bits/stdc++.h>
using namespace std;
int minto1(int n,int *ans)
{
    if(n==1)
       return ans[n]=0;
    if(ans[n-1]==-1)
       ans[n-1]=minto1(n-1,ans);
    int x=INT_MAX;
    int y=INT_MAX;
    if(n%2==0){
        if(ans[n/2]==-1)
            ans[n/2]=minto1(n/2,ans);
        x=ans[n/2];
    }
    if(n%3==0)
    {
        if(ans[n/3]==-1)
             ans[n/3]=minto1(n/3,ans);
        y=ans[n/3];
    }
    return ans[n]=min(ans[n-1],min(x,y))+1;
}
int main()
{
    int n;
    cin>>n;
    int *ans=new int[n+1];
    for(int i=0;i<n;i++)
        ans[i]=-1;
    cout<<minto1(n,ans);
    return 0;
}