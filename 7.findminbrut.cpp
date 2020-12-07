#include<bits/stdc++.h>
using namespace std;
int findmin(int n)
{
    if(n==1 || n==0)
       return n;
    int mi=INT_MAX;
    for(int i=1;(i*i)<=n;i++)
    {
        mi=min(mi,1+findmin(n-(i*i)));
    }
    return mi;
}
int main()
{
    int n;
    cin>>n;
    cout<<findmin(n);
    return 0;
}