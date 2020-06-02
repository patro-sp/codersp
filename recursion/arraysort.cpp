#include<iostream>
using namespace std;
bool check(int a[],int n)
{
    if(n==1 || n==0)
      return true;
    if(a[0]<a[1] && check(a+1,n-1))
       return true;
    else
       return false;
}
int main()
{
    int a[]={1,2,3,19,5};
    int n=sizeof(a)/sizeof(int);
    cout<<check(a,n)<<endl;
    return 0;
}