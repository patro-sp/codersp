#include<bits/stdc++.h>
using namespace std;
int mincostpath(int **input,int m,int n)
{
    int **ans=new int *[m];
    for(int i=0;i<m;i++)
    {
        ans[i]=new int[n];
    }
    ans[0][0]=input[0][0];
    for(int i=1;i<n;i++)
    {
        ans[0][i]=ans[0][i-1]+input[0][i];
    }
    for(int i=1;i<m;i++)
    {
        ans[i][0]=ans[i-1][0]+input[i][0];
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            ans[i][j]=input[i][j]+min(ans[i-1][j-1],min(ans[i-1][j],ans[i][j-1]));
        }
    }
    return ans[m-1][n-1];
}
int main()
{
    int m,n;
    cin>>m>>n;
    int **input=new int *[m];
    for(int i=0;i<m;i++)
    {
        input[i]=new int[n];
        for(int j=0;j<n;j++)
           cin>>input[i][j];
    }
    cout<<mincostpath(input,m,n);
}