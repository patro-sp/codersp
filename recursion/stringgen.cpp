#include<iostream>
using namespace std;
void generate(char *inp,char *out,int i,int j)
{
    if(inp[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int digit=inp[i]-'0';
    char ch=digit+'A'-1;
    out[j]=ch;
    generate(inp,out,i+1,j+1);
    if(inp[i+1]!='\0')
    {
        int sec=inp[i+1]-'0';
        int no=digit*10+sec;
        if(no<=26)
        {
            char a=no+'A'-1;
            out[j]=a;
            generate(inp,out,i+2,j+1);
        }
    }
    return;
}
int main()
{
    char inp[100];
    cin>>inp;
    char out[1000];
    generate(inp,out,0,0);
    return 0;
}