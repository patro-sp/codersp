#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[8]={10,20,30,40,40,40,50,60};
    int n=sizeof(a)/sizeof(int);
    int key=40;
    bool check=binary_search(a,a+n,key);
    if(check)
       cout<<"present"<<endl;
    else
       cout<<"not present"<<endl;
       
    auto lb=lower_bound(a,a+n,key);
    cout<<"first occurance"<<lb-a<<endl;
    
    auto ub=upper_bound(a,a+n,key);
    cout<<"last occurance"<<ub-a-1<<endl;
    cout<<"frequency"<<ub-lb;
    
    return 0;
}