/*输入n， 求y1=1!+3!+...m!(m是小于等于n的最大奇数） y2=2!+4!+...p!(p是小于等于n的最大偶数)。
输入描述:
每组输入包括1个整数：n
输出描述:
可能有多组测试数据，对于每组数据，
输出题目要求的y1和y2*/
#include<iostream>
using namespace std;
int factorial(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
        sum=sum*i;
    return sum;
}//定义阶乘函数方便计算
int main()
{
    int n;
    while(cin>>n)
    {
        int m=1,p=2,y1=0,y2=0;
        while(m<=n)
        {
            y1=y1+factorial(m);
            m=m+2;
        }
       
        while(p<=n)
        {
            y2=y2+factorial(p);
            p=p+2;
        }
        cout<<y1<<' '<<y2;
   
    }
}
