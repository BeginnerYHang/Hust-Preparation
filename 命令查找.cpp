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
            }//s.replace(p0,n0,str,pos,n)删除p0开始的n0个字符，然后在p0处插入字符串str中从pos(从0开始计数)开始的n个字符
            else
            {
                reverse(s.begin()+b,s.begin()+b+c);//reverse函数用于反转在[first,last)范围内的顺序
                
            }
            cout<<s<<endl;
         }
    }
    return 0;
        
}
