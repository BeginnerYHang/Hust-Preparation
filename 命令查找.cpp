#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string s;
    int n;
    while(cin>>s>>n)
    {
        string str;
        for(int i=0;i<n;i++)
        {
            int a,b,c;
            cin>>str;
            a=str[0]-'0';
            b=str[1]-'0';
            c=str[2]-'0';
            if(a)
            {
                s.replace(b,c,str,3,str.length()-3); 
            }//s.replace(p0,n0,str,pos,n)ɾ��p0��ʼ��n0���ַ���Ȼ����p0�������ַ���str�д�pos(��0��ʼ����)��ʼ��n���ַ�
            else
            {
                reverse(s.begin()+b,s.begin()+b+c);//reverse�������ڷ�ת��[first,last)��Χ�ڵ�˳��
                
            }
            cout<<s<<endl;
         }
    }
    return 0;
        
}
