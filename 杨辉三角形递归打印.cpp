#include<iostream>
using namespace std;
int YangHui(int i,int j)//�ݹ������������i��j�е�ֵ
{   if(j==1||j==i+1)
        return 1;
    else
        return YangHui(i-1,j-1)+YangHui(i-1,j);
}
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<N;i++)
    {for(int j=1;j<i+2;j++)
          cout<<YangHui(i,j)<<" ";
          cout<<endl;
     } 
    
    return 0;
}
