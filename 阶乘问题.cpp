/*����n�� ��y1=1!+3!+...m!(m��С�ڵ���n����������� y2=2!+4!+...p!(p��С�ڵ���n�����ż��)��
��������:
ÿ���������1��������n
�������:
�����ж���������ݣ�����ÿ�����ݣ�
�����ĿҪ���y1��y2*/
#include<iostream>
using namespace std;
int factorial(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
        sum=sum*i;
    return sum;
}//����׳˺����������
int main()
{
    int n;
    while(cin>>n)
    {
        int m=1,p=2,y1=0,y2=0;
        while(m<=n)
        {
            y1=y1+factorial(m);
            m=m+2;
        }
       
        while(p<=n)
        {
            y2=y2+factorial(p);
            p=p+2;
        }
        cout<<y1<<' '<<y2;
   
    }
}
