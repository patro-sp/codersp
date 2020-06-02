#include<iostream>
using namespace std;
int stringtoint(char *a,int n)
{
    if(n==0)
      return 0;
    int digit=a[n-1]-'0';
    int ans=stringtoint(a,n-1);
    return ans*10+digit;
}
int main()
{
    char a[]="1234";
    int n=sizeof(a)/sizeof(char);
    int no=stringtoint(a,n-1);
    cout<<no<<endl;
    cout<<no+1;
    return 0;
}