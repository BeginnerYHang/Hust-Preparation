#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;//ʹ��cin���ܽ��ո�һ���������������������Ҫ���������취 (���·���getline�����ɽ��ܰ����ո���ַ���)
	while(getline(cin,str)) 
	{
		int wordcount=0,lettercount=0;//��¼���ʡ���ĸ���� 
		//1.1 
		for(int i=0;i<str.size();i++)
		{
			if((str[i]>='A')&&(str[i]<='Z')||(str[i]>='a')&&(str[i]<='z'))
			       lettercount++;
		}
		cout<<"��ĸ�ĸ���Ϊ"<<lettercount<<endl;
	
		//1.2
		for(int i=0;i<str.size()-1;i++)
		{
		      if(str[i]!=' '&&str[i+1]==' '||str[i]==' '&&str[i+1]!=' ')
		             wordcount++;//ʹ����������ָ�����⣺ 
	    }
		cout<<"���ʵĸ���Ϊ"<<wordcount/2+1<<endl;
		//1.3
		for(int i=0;i<str.size();i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
			     str[i]=str[i]+26;//����д��ĸת��ΪСд��ĸ 
		}
		int num[26]={0};//ͳ�Ƹ�����ĸ���� 
		for(int i=0;i<str.size();i++)
		{
		 	if(str[i]!=' ')
		 	{
		 		num[str[i]-'a']++;//ͳ����ĸ���� 
			}
		}
		int Max=num[0];
		for(int i=0;i<26;i++)
		{
			if(num[i]>Max)
			{
				Max=num[i];
			}
		}//�ҵ����ֵ
		cout<<"��������������ĸΪ:";
		char c;
		for(int i=0;i<26;i++)
		{
			if(num[i]==Max)
			{
			    c=i+'a';
			    cout<<c<<' ';
			} 
		}
		cout<<endl;
		cout<<"���ֵ�������Ϊ:"<<Max<<endl; 
		 
	}
}
