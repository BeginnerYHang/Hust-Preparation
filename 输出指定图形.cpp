#include<iostream>
using namespace std;
int main()
{  /*本题关键为弄清下标对应关系*/ 
	char s;
	while(cin>>s)
	{
		int length;
		char a[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char b[27]="abcdefghijklmnopqrstuvwxyz";
		if(s>'A'&&s<'Z')
		{
			length=s-'A'+1;
			for(int i=0;i<length;i++)
			{
				for(int j=0;j<i;j++)
				   cout<<' ';
				for(int j=0;j<length-i;j++)
				{
					cout<<a[j];
				}
				for(int j=0;j<length-i-1;j++)
				{
					cout<<a[length-i-j-2];
				}
				cout<<endl;
			}
			
		}
		else	
		{
		    length=s-'a'+1;
			for(int i=0;i<length;i++)
			{
				for(int j=0;j<i;j++)
				   cout<<' ';
				for(int j=0;j<length-i;j++)
				{
					cout<<b[j];
				}
				for(int j=0;j<length-i-1;j++)
				{
					cout<<b[length-i-j-2];
				}
				cout<<endl;
			}
			
		}
		
	}
}
