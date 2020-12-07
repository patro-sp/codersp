#include<bits/stdc++.h>
using namespace std;
int minto1(int n)
{
    if(n==1)
       return 0;
    int a=minto1(n-1);
    int b=INT_MAX;
    int c=INT_MAX;
    if(n%2==0)
       b=minto1(n/2);
    if(n%3==0)
      c=minto1(n/3);
    return min(a,min(b,c))+1;
}
int main()
{
    int n;
    cin>>n;
    cout<<minto1(n);
    return 0;
}