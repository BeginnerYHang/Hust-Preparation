#include<iostream>
using namespace std;
int PrimerNumber(int n)
{
	int flag=0;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	 return 0;//flag=0�������� 
	return 1;
}
int main()
{
	int n; 
	while(cin>>n)
	{
	int p=0,j=0;//��¼�Ƿ�Ϊ����
	int a[2];//����������� 
	for(int i=2;i<=n;i++)
	{
	    p=PrimerNumber(i);
		if(p==1)
		{
			a[j]=i;
			j++;
			if(j>1)
			j=j%2;//ȷ����ŵ�Ϊ���µ��������� 
		}
	}
	cout<<a[1]<<" "<<a[0]<<endl; 
    }
    return 0;
}
