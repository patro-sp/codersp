#include<iostream>
using namespace std;
int fastpow(int a,int n)
{
    if(n==0)
       return 1;
    int ans=fastpow(a,n/2);
    ans*=ans;
    if(n&1)
      return a*ans;
    else
      return ans;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<fastpow(a,n);
    return 0;
}