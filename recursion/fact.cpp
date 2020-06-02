#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
      return 1;
    else
       return n*fact(n-1);
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
