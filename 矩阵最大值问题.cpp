/*��дһ����������һ��mXn�ľ���洢��������������ÿ�е����ֵ��ÿ�е��ܺ͡� Ҫ���ÿ���ܺͷ���ÿ�����ֵ��λ�ã�����ж�����ֵ��ȡ�±�ֵ��С����һ����Ϊ���ֵ�� ��󽫽�����������
��������:
����ĵ�һ�а�����������m��n(1<=m,n<=100)���ֱ���������к��е�ά����
��������m��ÿ����n��������������Ԫ�ء�
�������:
�����ж���������ݣ�����ÿ�����ݣ��������ĿҪ��ִ�к�ľ���*/ 
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int a[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        for(int i=0;i<m;i++)
        {
            int sum=0;
            int Max=a[i][0];
            for(int j=0;j<n;j++)
            {
                sum=sum+a[i][j];
                if(a[i][j]>Max)
                  Max=a[i][j];
            }
             for(int j=0;j<n;j++)
              if(a[i][j]==Max)
                 {
                     a[i][j]=sum;
                     break;
                 }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
              cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
