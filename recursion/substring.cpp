#include<iostream>
using namespace std;
void generate(char *a,char *b,int i,int j)
{
    if(a[i]=='\0')
    {
        b[j]='\0';
        cout<<b<<endl;
        return;
    }
    b[j]=a[i];
    generate(a,b,i+1,j+1);
    generate(a,b,i+1,j);
}
int main()
{
    char a[]="abc";
    char b[100];
    generate(a,b,0,0);
    return 0;
}