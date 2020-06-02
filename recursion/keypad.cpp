#include<iostream>
using namespace std;
char a[10][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generate(char *input,char *out,int i,int j)
{
    if(input[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int digit=input[i]-'0';
    if(digit==0 || digit==1)
       generate(input,out,i+1,j);
    for(int k=0;a[digit][k]!='\0';k++)
    {
        out[j]=a[digit][k];
        generate(input,out,i+1,j+1);
    }
    return;
}
int main()
{
    char input[100];
    cin>>input;
    char out[100];
    generate(input,out,0,0);
    return 0;
}