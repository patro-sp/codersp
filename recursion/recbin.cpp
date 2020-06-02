#include<iostream>
using namespace std;
int binary(int a[],int e,int k,int s)
{
    int mid=(s+e)/2;
    if(s>e)
       return -1;
    if(a[mid]==k)
       return mid;
    else if(a[mid]>k)
       return binary(a,mid-1,k,s);
    else
       return binary(a,s,k,mid+1);
}
int main()
{
    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    cout<<binary(a,n-1,k,0);
    return 0;
}