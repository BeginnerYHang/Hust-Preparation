#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;//使用cin不能将空格一并输入至缓冲区，因此需要采用其他办法 (如下方的getline函数可接受包含空格的字符串)
	while(getline(cin,str)) 
	{
		int wordcount=0,lettercount=0;//记录单词、字母个数 
		//1.1 
		for(int i=0;i<str.size();i++)
		{
			if((str[i]>='A')&&(str[i]<='Z')||(str[i]>='a')&&(str[i]<='z'))
			       lettercount++;
		}
		cout<<"字母的个数为"<<lettercount<<endl;
	
		//1.2
		for(int i=0;i<str.size()-1;i++)
		{
		      if(str[i]!=' '&&str[i+1]==' '||str[i]==' '&&str[i+1]!=' ')
		             wordcount++;//使用两个工作指针的另解： 
	    }
		cout<<"单词的个数为"<<wordcount/2+1<<endl;
		//1.3
		for(int i=0;i<str.size();i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
			     str[i]=str[i]+26;//将大写字母转化为小写字母 
		}
		int num[26]={0};//统计各个字母个数 
		for(int i=0;i<str.size();i++)
		{
		 	if(str[i]!=' ')
		 	{
		 		num[str[i]-'a']++;//统计字母个数 
			}
		}
		int Max=num[0];
		for(int i=0;i<26;i++)
		{
			if(num[i]>Max)
			{
				Max=num[i];
			}
		}//找到最大值
		cout<<"出现最多次数的字母为:";
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
		cout<<"出现的最大次数为:"<<Max<<endl; 
		 
	}
}
