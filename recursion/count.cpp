#include<iostream>
using namespace std;
int merge(int a[],int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int t[1000];
    int cnt=0;
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            t[k++]=a[i++];
        }
        else
        {
            t[k++]=a[j++];
            cnt+=mid-i+1;
        }
    }
    while(i<=mid)
       t[k++]=a[i++];
    while(j<=e)
       t[k++]=a[j++];
    for(int i=s;i<=e;i++)
          a[i]=t[i];
    return cnt;
}
int count(int a[],int s,int e)
{
    if(s>=e)
      return 0;
    int mid=(s+e)/2;
    int x=count(a,s,mid);
    int y=count(a,mid+1,e);
    int z=merge(a,s,e);
    return x+y+z;
}
int main()
{
    int a[]={1,5,3,7,2};
    int n=sizeof(a)/sizeof(int);
    cout<<count(a,0,n-1);
    return 0;
}