/*��Ŀ����
������������A��B�����ʾ��ʽ�ǣ��Ӹ�λ��ʼ��ÿ��λ���ö���","������ ���������A+B�Ľ��������������ʽ�����
��������:
������������������ݣ�ÿ������ռһ�У�����������A��B��ɣ�-10^9 < A,B < 10^9����
�������:
�����A+B�Ľ��������������ʽ�����ÿ������ռһ��*/
#include<iostream>
#include<string>
using namespace std;
int process(string a)
{
    int num=0;//�ַ���ת��ֵ��¼����
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==','||a[i]=='-')
            continue;
        else
            num=num*10+a[i]-'0';
    }//�������ֵ
    if(a[0]=='-')
        return -num;
    return num;
}
int main()
{
    string A,B;
    while(cin>>A>>B)
    {
        int a,b;
        a=process(A);
        b=process(B);
        cout<<a+b<<endl;
    }
}
