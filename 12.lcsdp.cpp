#include<bits/stdc++.h>
using namespace std;
int lcsdp(string s,string t)
{
    int m=s.size();
    int n=t.size();
    int **ans=new int *[m+1];
    for(int i=0;i<=m;i++)
       ans[i]=new int[n+1];
    for(int j=0;j<=m;j++)
       ans[j][0]=0;
    for(int i=0;i<=n;i++)
       ans[0][i]=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
          {
              if(s[i]==t[j])
                 ans[i][j]=1+ans[i-1][j-1];
                else
                  ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
          }
    }
    return ans[m][n];
}
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    cout<<lcsdp(s,t);
}