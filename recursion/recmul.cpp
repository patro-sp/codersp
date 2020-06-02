#include<iostream>
using namespace std;
int mul(int a,int n)
{
    if(n==0)
      return 0;
    else
      return a+mul(a,n-1);
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<mul(a,n);
    return 0;
}