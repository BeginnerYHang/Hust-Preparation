/*题目描述
给定两个整数A和B，其表示形式是：从个位开始，每三位数用逗号","隔开。 现在请计算A+B的结果，并以正常形式输出。
输入描述:
输入包含多组数据数据，每组数据占一行，由两个整数A和B组成（-10^9 < A,B < 10^9）。
输出描述:
请计算A+B的结果，并以正常形式输出，每组数据占一行*/
#include<iostream>
#include<string>
using namespace std;
int process(string a)
{
    int num=0;//字符串转数值记录变量
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==','||a[i]=='-')
            continue;
        else
            num=num*10+a[i]-'0';
    }//处理出数值
    if(a[0]=='-')
        return -num;
    return num;
}
int main()
{
    string A,B;
    while(cin>>A>>B)
    {
        int a,b;
        a=process(A);
        b=process(B);
        cout<<a+b<<endl;
    }
}
