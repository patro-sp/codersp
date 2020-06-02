#include<iostream>
using namespace std;
//wall=4*n , tile1=1*4 ,tile2=4*1
int count(int n)
{
    if(n<=3)
       return 1;
    if(n==4)
      return 2;
    return count(n-1)+count(n-4);
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
    return 0;

}