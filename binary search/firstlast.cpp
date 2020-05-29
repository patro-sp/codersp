#include<iostream>
using namespace std;
int firstbin(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>key)
            e=mid-1;
        else
           s=mid+1;
    }
    return ans;
}
int lastbin(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>key)
            e=mid-1;
        else
           s=mid+1;
    }
    return ans;
}
int main() {
    int a[10]={1,2,8,8,8,8,9,10,12,100};
    int key=8;
    cout<<firstbin(a,10,key)<<endl;
    cout<<lastbin(a,10,key)<<endl;
    return 0;
}
