#include <iostream>
using namespace std;
int binarys(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
           return mid;
        else if(a[mid]>key)
           e=mid-1;
         else
        s=mid+1;
    }
    return -1;
}
int main() {
	// your code goes here
	int a[100];
	int n;
	cin>>n;
	int key;
	cin>>key;
	for(int i=0;i<n;i++)
	   a[i]=i*2;
	   
	cout<<binarys(a,n,key);
	return 0;
}
