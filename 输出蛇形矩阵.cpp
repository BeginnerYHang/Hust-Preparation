#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	int N;
	while(cin>>N)
	{
		int a[N][N];
		int num=1;//用来记录输入的数字 
		for(int k=0;k<2*N-1;k++)
		{
			for(int i=0;i<N;i++)
			   for(int j=0;j<N;j++)
			     if(i+j==k)
				 a[i][j]=num++;
			//将其中的某些斜行反序输出 
			if(k%2==0)
			{
			  int temp=0;
			  for(int i=0;i<N;i++)
			   for(int j=0;j<N;j++)
			     if(i+j==k&&(i>j))
			     {
			     	 temp=a[i][j];
			     	 a[i][j]=a[j][i];
			     	 a[j][i]=temp;
				 }
			}
		}
		for(int i=0;i<N;i++)
		{
		    for(int j=0;j<N;j++)
		       cout<<left<<setw(3)<<a[i][j];
		       cout<<endl;
		}
	}
	return 0;
}
