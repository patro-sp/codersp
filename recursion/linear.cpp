#include<iostream>
using namespace std;
int first(int a[],int i,int n,int k)
{
    if(i==n)
      return -1;
    if(a[i]==k)
       return i;
    return first(a,i+1,n,k);
}
int main()
{
    int a[]={1,2,7,4,7,9};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    cout<<first(a,0,n,k);
    return 0;
}