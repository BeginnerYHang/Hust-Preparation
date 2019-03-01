/*任意输入两个9阶以下矩阵，要求判断第二个是否是第一个的旋转矩阵，如果是，输出旋转角度（0、90、180、270），如果不是，输出-1。 要求先输入矩阵阶数，然后输入两个矩阵，每行两个数之间可以用任意个空格分隔。行之间用回车分隔，两个矩阵间用任意的回车分隔。
输入描述:
输入有多组数据。
每组数据第一行输入n(1<=n<=9)，从第二行开始输入两个n阶矩阵。
输出描述:
判断第二个是否是第一个的旋转矩阵，如果是，输出旋转角度（0、90、180、270），如果不是，输出-1。
如果旋转角度的结果有多个，则输出最小的那个。*/
#include<iostream>
#define M 9
using namespace std;/*矩阵旋转通式（以顺时针为例）：0    a[i][j]=b[i][j]
                                                   90    a[i][j]=b[j][n-1-i]
                                                  180   a[i][j]=b[n-1-i][n-1-j]
                                                  270   a[i][j]=b[n-1-j][i]*/
int RotationAngle(int A[M][M],int B[M][M],int n)
{
    int flag=0;//标志位
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
                if(A[i][j]!=B[i][j])
                {
                    flag=1;
                    break;
                }
        if(flag==1)
            break;
    }
    if(flag==0)
      return 0;
    flag=0;//flag清0
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
                if(A[i][j]!=B[j][n-1-i])
                {
                    flag=1;
                    break;
                }
        if(flag==1)
            break;
    }
    if(flag==0)
        return 90;
    flag=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
                 if(A[i][j]!=B[n-1-i][n-1-j])
                 {
                     flag=1;
                     break;
                 }
        if(flag==1)
            break;
    }
    if(flag==0)
        return 180;
    flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
                if(A[i][j]!=B[n-1-j][i])
                {
                    flag=1;
                    break;
                }
        if(flag==1)
            break;
    }
    if(flag==0)
        return 270;
    return -1;
 }
int main()
{
    int n;
    while(cin>>n)
    {
        int a[M][M],b[M][M];//存储角度（选择最小的角度）;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>b[i][j];
        int Angle;
        Angle=RotationAngle(a,b,n);
        cout<<Angle<<endl;
    }
    return 0;
}
