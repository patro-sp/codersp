#include <bits/stdc++.h>
using namespace std;
int fib(int n,int *ans)
{
    if(n==0 || n==1)
       return ans[n]=n;
    if(ans[n-1]==0)
       ans[n-1]=fib(n-1,ans);
    if(ans[n-2]==0)
       ans[n-2]=fib(n-2,ans);
    return ans[n]=ans[n-1]+ans[n-2];
}
int main() {
    int n;
    cin>>n;
    int *ans=new int[n+1];
    for(int i=0;i<n;i++)
        ans[i]=0;
    cout<<fib(n,ans);
    return 0;
}
