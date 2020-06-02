#include<iostream>
using namespace std;
int first(int a[],int n,int k)
{
    if(n==0)
      return -1;
    if(a[0]==k)
      return 0;
    int i=first(a+1,n-1,k);
    if(i==-1)
      return -1;
    else
      return i+1;
}
int main()
{
    int a[]={1,2,7,4,7,9};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    cout<<first(a,n,k);
    return 0;
}