#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int change,N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<N;i++)
	for(int j=0;j<N-i-1;j++)
	{
		if(a[i]>a[i+1])
		{
		  change=a[i+1];
		  a[i+1]=a[i];
		  a[i]=change;
	    }
	}
	cout<<a[N-1]<<endl;
	for(int i=0;i<N-1;i++)
	cout<<a[i]<<' ';
	
}
