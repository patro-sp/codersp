#include <iostream>
#include<algorithm>
using namespace std;
bool check(int books[],int n,int m,int mini)
{
    int student=1;
    int pages=0;
    for(int i=0;i<n;i++)
    {
        if(pages+books[i]>mini)
        {
            student++;
            pages=books[i];
            if(student>m)
              return false;
        }
        else
            pages+=books[i];
    }
    return true;
}
int findbook(int books[],int n,int m)
{
    long long sum=0;
    if(n<m)
       return -1;
    for(int i=0;i<n;i++)
       sum+=books[i];
    int s=books[n-1];
    int e=sum;
    int ans=9999;
    while(s<=e)
    {
        int mid=(s+e)/2;
        bool possible=check(books,n,m,mid);
        if(possible)
        {
            ans=min(ans,mid);
            e=mid-1;
        }
        else
          s=mid+1;
    }
    return ans;
}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int books[n];
	    for(int j=0;j<n;j++)
	       cin>>books[j];
	   int m;
	   cin>>m;
	   cout<<findbook(books,n,m)<<endl;
	}
	return 0;
}
