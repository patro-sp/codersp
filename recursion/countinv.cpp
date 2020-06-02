#include<iostream>
using namespace std;
int merge(int *a,int s,int mid,int e,int n)
{
    int i=s;
    int j=mid+1;
    int t[100];
    int k=s;
    int c=0;
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
           t[k++]=a[i++];
        else
         {
             c+=mid-i+1;
             t[k++]=a[j++];
         }
    }
    while(i<=mid)
      t[k++]=a[i++];
    while(j<=e)
       t[k++]=a[j++];
     for(int i=s;i<=e;i++)
       a[i]=t[i];
    return c; 
}

int count(int *a,int s,int e,int n)
{
    if(s>=e)
       return 0;
    int mid=(s+e)/2;
     return count(a,s,mid,n)+count(a,mid+1,e,n)+merge(a,s,mid,e,n);
}
int main()
{
    int a[]={1,4,7,3,8,9,0};
    int n=sizeof(a)/sizeof(int);
    cout<<count(a,0,n-1,n);
    return 0;
}