#include<iostream>
#include<string>
using namespace std;
void ReverseString(string a,int A[1000])//转置函数，把字符串转化为数字存储至数组内
{
    for(int i=0;i<a.length();i++)
        A[i]=a[i]-'0';
    int temp=0;
    for(int i=0;i<(a.length()/2);i++)
    {
        temp=A[i];
        A[i]=A[a.length()-1-i];
        A[a.length()-1-i]=temp;
    }
}
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int A[1000]={0},B[1000]={0},result[1000]={0};
        ReverseString(a,A);
        ReverseString(b,B);
        int carry=0;//处理进位信息
        for(int i=0;i<1000;i++)
        {
        	
            result[i]=A[i]+B[i]+carry;
            carry=0;
            if(result[i]>=10)
            {
                result[i]=result[i]%10;
                carry=1;
            }
        }
        int Maxlength;
        Maxlength=(a.size()>b.size())?a.size():b.size();
        for(int i=0;i<Maxlength;i++)
            cout<<result[Maxlength-i-1];
    }
    return 0;
}
