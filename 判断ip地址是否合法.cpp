/*题目描述
输入一个ip地址串，判断是否合法。
输入描述:
每行有一个IP地址，IP地址的形式为a.b.c.d，其中a、b、c、d都是整数。
输出描述:
可能有多组测试数据，对于每组数据，如果IP地址合法则输出"Yes!”，否则输出"No!”。

合法的IP地址为：
a、b、c、d都是0-255的整数。*/
#include<iostream>
using namespace std;//可能考虑的不全面，只考虑了a、b、c、d为正数的情况 
int main()
{
    string a;
    while(cin>>a)
    {
        int sum=0,flag=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!='.')
            {
                sum=sum*10+a[i]-'0';
                if(sum>255)
                {
                    flag=1;
                    break;
                }
            }
            else
                sum=0;
                continue;
        }
        if(flag)
            cout<<"No!"<<endl;
        else
            cout<<"Yes!"<<endl;
    }
}
