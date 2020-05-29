#include<iostream>
using namespace std;
float squareroot(int n,int p)
{
    int s=0;
    int e=n;
    float ans;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(mid*mid==n)
        {
           ans=mid; 
           return ans;
        }
        else if(mid * mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
           e=mid-1;
    }
    float inc=0.1;
    for(int i=0;i<p;i++)
    {
        while(ans*ans<n)
        {
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<squareroot(n,p);
    return 0;
}