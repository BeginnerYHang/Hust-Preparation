#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	int N;
	while(cin>>N)
	{ 
	int a[N][N];
	int k=1;//��¼����������� 
	for(int q=0;q<N/2;q++)//��¼�ڼ�Ȧ���� 
	{
		    int i,j;
	        for (i=j=q; j < N- q - 1; j++)
				a[i][j] = k++;
			for (; i < N - q - 1; i++)
				a[i][j] = k++;
			for (; j > q; j--)
				a[i][j] = k++;
			for (; i > q; i--)
				a[i][j] = k++;
  } 
	if(N%2!=0)
	a[N/2][N/2]=k;//���Ϊ����Ȧʣ��һ�����ĵ�λ��
	for(int p=0;p<N;p++)
	{
	     for(int q=0;q<N;q++)
	     cout<<left<<setw(3)<<a[p][q];
	     cout<<endl;
	 }
	 } 
	 return 0;
} 
