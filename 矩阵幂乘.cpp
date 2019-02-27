#include<iostream>
using namespace std;
#define s 10
void MatrixMulti(int result[s][s],int a[s][s],int n)//计算矩阵乘法，结果存入result数组内
{
    int c[s][s]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            c[i][j]=result[i][j];//result数组复制给c数组
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
           {
		    int sum=0;
            for(int k=0;k<n;k++)
            {
				sum=sum+c[i][k]*a[k][j];
                result[i][j]=sum;
            }
        }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[s][s];
    int result[s][s];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            result[i][j]=a[i][j];
        }
    for(int i=0;i<k-1;i++)
        MatrixMulti(result,a,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<result[i][j]<<' ';
        cout<<endl;
    }
 }
