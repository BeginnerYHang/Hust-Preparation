#include<iostream>
#include<string>
using namespace std;
int main()
{
      string str;
      cin>>str;
      while(str!="Z")
      {
           if(str[0]!='0')
		   {
		   	  
			  int flag1=0;
		   	  for(int i=0;i<str.length();i++)
		   	     if(str[i]<'0'||str[i]>'9')
		   	     {
		   	     	flag1=1;
		   	     	break;
				}
				if(flag1)
				cout<<"No"<<endl;
				else
				cout<<"Yes"<<endl; //ʮ�����жϷ�֧ 
		    } 
			else
			{
				if(str[1]=='x'||str[1]=='X')
				{
				if(str.length()==2)
					cout<<"No"<<endl;
				else
				{
				 int flag2=0;
		   	     for(int i=2;i<str.length();i++)
		   	     if(!((str[i]<='9'&&str[i]>='0')||(str[i]>='A'&&str[i]<='F')||(str[i]>='a'&&str[i]<='f')))
		   	     {
		   	     	flag2=1;
		   	     	break;
				}
				   if(flag2)
			    	cout<<"No"<<endl;
				   else
			    	cout<<"Yes"<<endl;//ʮ�����Ʒ�֧�ж� 
				}
			}
				else
				{
				int flag3=0;
		   	    for(int i=0;i<str.length();i++)
		   	     if(str[i]<'0'||str[i]>'7')
		   	     {
		   	     	flag3=1;
		   	     	break;
				}
				if(flag3)
				cout<<"No"<<endl;
				else
				cout<<"Yes"<<endl;//�˽��Ʒ�֧�ж� 
				} 
				
			} 
			cin>>str;   	
	  }
return 0;

} 
