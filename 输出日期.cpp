#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	while(cin>>a>>b)
	{
		int flag;
		if((a%4==0&&a%100!=0)||(a%400==0))
		{
			flag=1;
		}
		int e,f,sum,i;
		if(flag==0)
		{
		while(b>sum)
		{   
		     
			sum=sum+d[i];
			i++;
			e=i;
			f=b-sum;
		}
		if(e<10)
		cout<<a<<"-0"<<e<<"-"<<f;
		else
		cout<<a<<"-"<<e<<"-"<<f;
	    }
	    else
	    {
		while(b>sum)
		{   
			sum=sum+c[i];
			i++;
			e=i;
			f=b-sum;
		}
		if(e<10)
		  cout<<a<<"-0"<<e<<"-"<<f;
		else
	    	cout<<a<<"-"<<e<<"-"<<f;
	    }
	    flag=0;
	    e=0;
	    f=0;
	    sum=0;
	    i=0;
	}
	return 0;
}
