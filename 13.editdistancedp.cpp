#include <bits/stdc++.h>
using namespace std;
int editdistance(string s,string t)
{
    int m=s.size();
    int n=t.size();
    int **ans=new int *[m+1];
    for(int i=0;i<=m;i++)
       ans[i]=new int[n+1];
    for(int i=0;i<=n;i++)
      ans[0][i]=i;
    for(int i=0;i<=m;i++)
       ans[i][0]=i;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[m-i]==t[n-j])
               ans[i][j]=ans[i-1][j-1];
            else
               ans[i][j]=min(ans[i-1][j],min(ans[i][j-1],ans[i-1][j-1]))+1;
        }
    }
    return ans[m][n];
}
int main() {
    string s,t;
    cin>>s;
    cin>>t;
    cout<<editdistance(s,t);
    return 0;
}
