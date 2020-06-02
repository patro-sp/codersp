#include <iostream>
#include<cmath>
using namespace std;
bool canplace(int mat[][9],int i,int j,int n,int no)
{
    for(int x=0;x<n;x++)
    {
        if(mat[x][j]==no || mat[i][x]==no)
           return false;
    }
    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;
    for(int x=sx;x<sx+rn;x++)
    {
        for(int y=sy;y<sy+rn;y++)
        {
            if(mat[x][y]==no)
              return false;
        }
    }
    return true;
}
bool solvesudoku(int mat[][9],int i,int j,int n)
{
    if(i==n)
    {
        for(int x=0;x<n;x++){
         {
             for(int y=0;y<n;y++)
                cout<<mat[x][y]<<" ";
         }
         cout<<endl;
        }
         return true;
    }
    if(j==n)
       return solvesudoku(mat,i+1,0,n);
    if(mat[i][j]!=0)
       return solvesudoku(mat,i,j+1,n);
    for(int no=1;no<=9;no++)
    {
        if(canplace(mat,i,j,n,no))
        {
            mat[i][j]=no;
            bool check=solvesudoku(mat,i,j+1,n);
            if(check)
              return true;
        }
    }
    mat[i][j]=0;
    return false;
} 
int main() {
    int mat[9][9]={
                   {5,3,0,0,7,0,0,0,0},
                   {6,0,0,1,9,5,0,0,0},
                   {0,9,8,0,0,0,0,6,0},
                   {8,0,0,0,6,0,0,0,3},
                   {4,0,0,8,0,3,0,0,1},
                   {7,0,0,0,2,0,0,0,6},
                   {0,6,0,0,0,0,2,8,0},
                   {0,0,0,4,1,9,0,0,5},
                   {0,0,0,0,8,0,0,7,9}
                  };
    solvesudoku(mat,0,0,9);
    return 0;
}
