#include<iostream>
using namespace std;
void merge(int *a,int s,int mid,int e)
{
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
           temp[k++]=a[i++];
        else if(a[j]<a[i])
           temp[k++]=a[j++];
        else{
           temp[k++]=a[i++];
           j++;}
    }
    while(i<=mid)
       temp[k++]=a[i++];
    while(j<=e)
       temp[k++]=a[j++];
    for(int i=0;i<=e;i++)
       a[i]=temp[i];
}
void mergesort(int a[],int s,int e)
{
    if(s>=e)
      return;
    int mid=(s+e)/2;
     mergesort(a,s,mid);
     mergesort(a,mid+1,e);
     merge(a,s,mid,e);
}
int main()
{
    int a[]={3,1,6,9,10,45,7};
    int n=sizeof(a)/sizeof(int);
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
    return 0;
}