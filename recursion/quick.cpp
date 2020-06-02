#include<iostream>
#include<algorithm>
using namespace std;
int partition(int *a,int s,int e)
{
    int p=a[e];
    int i=s-1;
    int j=s;
    while(j<e)
    {
        if(a[j]<p)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quick(int *a,int s,int e)
{
    if(s>=e)
      return;
    int p=partition(a,s,e);
    quick(a,s,p-1);
    quick(a,p+1,e);
}
int main()
{
    int a[]={2,1,4,5,2,5,9};
    int n=sizeof(a)/sizeof(int);
    quick(a,0,n-1);
    for(int i=0;i<n;i++)
       cout<<a[i]<<",";
    return 0;
}