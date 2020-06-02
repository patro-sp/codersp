#include <iostream>
using namespace std;
int last(int a[],int n,int k)
{
    if(n==0)
      return -1;
    int i=last(a+1,n-1,k);
    if(i==-1)
    {
        if(a[0]==k)
           return 0;
        else
          return -1;
    }
    return i+1;
}
int main() {
    int a[]={1,5,2,7,3,7,10};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    cout<<last(a,n,k);
    return 0;
}
