#include <iostream>
using namespace std;
void inc(int n)
{
    if(n==0)
     return;
    else
    {
        inc(n-1);
        cout<<n<<" ";
    }
}

void dec(int n)
{
    if(n==0)
     return;
    else
    {
        cout<<n<<" ";
        dec(n-1);
    }
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	dec(n);
	cout<<endl;
	inc(n);
	return 0;
}
