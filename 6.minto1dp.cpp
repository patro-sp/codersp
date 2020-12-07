#include<bits/stdc++.h>
using namespace std;
int minto1(int n)
{
    int *ans=new int[n+1];
    ans[1]=0;
    for(int i=2;i<=n;i++){
        int x=INT_MAX;
        int y=INT_MAX;
        if(i%2==0)
           x=ans[i/2];
        if(i%3==0)
           y=ans[i/3];
        ans[i]=min(ans[i-1],min(x,y))+1;
    }
    return ans[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<minto1(n);
    return 0;
}