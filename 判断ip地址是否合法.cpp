/*��Ŀ����
����һ��ip��ַ�����ж��Ƿ�Ϸ���
��������:
ÿ����һ��IP��ַ��IP��ַ����ʽΪa.b.c.d������a��b��c��d����������
�������:
�����ж���������ݣ�����ÿ�����ݣ����IP��ַ�Ϸ������"Yes!�����������"No!����

�Ϸ���IP��ַΪ��
a��b��c��d����0-255��������*/
#include<iostream>
using namespace std;//���ܿ��ǵĲ�ȫ�棬ֻ������a��b��c��dΪ��������� 
int main()
{
    string a;
    while(cin>>a)
    {
        int sum=0,flag=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!='.')
            {
                sum=sum*10+a[i]-'0';
                if(sum>255)
                {
                    flag=1;
                    break;
                }
            }
            else
                sum=0;
                continue;
        }
        if(flag)
            cout<<"No!"<<endl;
        else
            cout<<"Yes!"<<endl;
    }
}
