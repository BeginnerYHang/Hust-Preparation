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
	 return 0;//flag=0不是素数 
	return 1;
}
int main()
{
	int n; 
	while(cin>>n)
	{
	int p=0,j=0;//记录是否为素数
	int a[2];//存放孪生素数 
	for(int i=2;i<=n;i++)
	{
	    p=PrimerNumber(i);
		if(p==1)
		{
			a[j]=i;
			j++;
			if(j>1)
			j=j%2;//确保存放的为最新的孪生素数 
		}
	}
	cout<<a[1]<<" "<<a[0]<<endl; 
    }
    return 0;
}
