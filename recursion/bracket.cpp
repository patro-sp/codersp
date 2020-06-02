#include<iostream>
using namespace std;
void bracket(int n,int idx,int open,int close,char *out)
{
    if(idx==n*2)
    {
        out[idx]='\0';
        cout<<out<<endl;
        return;
    }
    if(open<n)
    {
        out[idx]='(';
        bracket(n,idx+1,open+1,close,out);
    }
    if(close<open)
    {
        out[idx]=')';
        bracket(n,idx+1,open,close+1,out);
    }
}
int main()
{
    int n;
    cin>>n;
    char out[100];
    bracket(n,0,0,0,out);
    return 0;
}