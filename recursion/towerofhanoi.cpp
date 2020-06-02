#include<iostream>
using namespace std;
void path(int n,char src,char dest,char helper)
{
    if(n==0)
       return;
    path(n-1,src,helper,dest);
    cout<<n<<" "<<src<<"to"<<dest<<endl;
    path(n-1,helper,dest,src);
}
int main()
{
    int n;
    cin>>n;
    path(n,'A','C','B');
    return 0;
}