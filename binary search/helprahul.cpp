#include<iostream>
using namespace std;
int findkey(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
           return mid;
        else if(a[s]<=a[mid])
        {
            if(key<a[mid] && key>=a[s])
               e=mid-1;
            else
               s=mid+1;
        }
        else
        {
            if(key>a[mid] && key <=a[e])
                 s=mid+1;
            else
                 e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<findkey(a,n,key);
    return 0;
}