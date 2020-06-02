#include<iostream>
using namespace std;
//char a[10][]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void print(int n)
{
    char a[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0)
      return;
    print(n/10);
    cout<<a[n%10]<<" ";
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}