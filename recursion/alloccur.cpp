#include<iostream>
using namespace std;
int count(int a[],int i,int n,int k,int *out,int j)
{
    if(i==n)
      return j;
    if(a[i]==k)
    {
        out[j]=i;
        return count(a,i+1,n,k,out,j+1);
    }
    else
      return count(a,i+1,n,k,out,j);
}
void occur(int a[],int i,int n,int k)
{
    if(i==n)
      return;
    if(a[i]==k)
       {
           cout<<i<<",";
           occur(a,i+1,n,k);
       }
    else
    {
           occur(a,i+1,n,k);        
    }

}
int main()
{
    int a[]={1,5,7,2,0,7,10};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    occur(a,0,n,k);
    int out[100];
    int cnt=count(a,0,n,k,out,0);
    cout<<endl<<cnt;
    return 0;
}