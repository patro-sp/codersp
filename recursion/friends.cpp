#include<iostream>
using namespace std;
int find(int n)
{
    if(n==0 || n==1)
       return 1;
    return find(n-1)+(n-1)*find(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<find(n);
    return 0;
}