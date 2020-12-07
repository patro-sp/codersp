#include<bits/stdc++.h>
using namespace std;
int balancedbst(int n)
{
    if(n==0 || n==1)
       return 1;
    int x=balancedbst(n-1);
    int y=balancedbst(n-2);
    return x*x+2*x*y;
}
int main()
{
    int n;
    cin>>n;
    cout<<balancedbst(n);
    return 0;
}