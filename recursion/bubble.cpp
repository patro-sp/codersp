#include<iostream>
using namespace std;
void bubble(int *a,int j,int n)
{
    if(n==0)
      return;
    if(j==n-1)
      bubble(a,0,n-1);
    else
    {
        if(a[j]>a[j+1])
           swap(a[j],a[j+1]);
        bubble(a,j+1,n);
    }
}
int main()
{
    int a[]={1,6,4,3,2,9,0};
    int n=sizeof(a)/sizeof(int);
    bubble(a,0,n);
    for(int i=0;i<n;i++)
       cout<<a[i]<<" , ";
    return 0;
}