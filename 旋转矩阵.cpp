/*������������9�����¾���Ҫ���жϵڶ����Ƿ��ǵ�һ������ת��������ǣ������ת�Ƕȣ�0��90��180��270����������ǣ����-1�� Ҫ����������������Ȼ��������������ÿ��������֮�������������ո�ָ�����֮���ûس��ָ������������������Ļس��ָ���
��������:
�����ж������ݡ�
ÿ�����ݵ�һ������n(1<=n<=9)���ӵڶ��п�ʼ��������n�׾���
�������:
�жϵڶ����Ƿ��ǵ�һ������ת��������ǣ������ת�Ƕȣ�0��90��180��270����������ǣ����-1��
�����ת�ǶȵĽ���ж�����������С���Ǹ���*/
#include<iostream>
#define M 9
using namespace std;/*������תͨʽ����˳ʱ��Ϊ������0    a[i][j]=b[i][j]
                                                   90    a[i][j]=b[j][n-1-i]
                                                  180   a[i][j]=b[n-1-i][n-1-j]
                                                  270   a[i][j]=b[n-1-j][i]*/
int RotationAngle(int A[M][M],int B[M][M],int n)
{
    int flag=0;//��־λ
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
    flag=0;//flag��0
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
        int a[M][M],b[M][M];//�洢�Ƕȣ�ѡ����С�ĽǶȣ�;
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
