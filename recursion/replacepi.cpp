#include<iostream>
using namespace std;
void pi(char* a,int i)
{
    if(a[i]=='\0' || a[i+1]=='\0')
       return;
    if(a[i]=='p' and a[i+1]=='i')
    {
        int j=i+2;
        while(j!='\0')
          j++;
        while(j>=i+2){
           a[j+2]=a[j];
           j--;
           }
        a[i]='3';
        a[i+1]='.';
        a[i+2]='1';
        a[i+3]='4';
        pi(a,i+4);
    }
    else
      pi(a,i+1);
    return;
}
int main()
{
    char a[]="thispimypighjpi";
    pi(a,0);
    cout<<a;
    return 0;
}