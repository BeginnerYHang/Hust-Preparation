#include<iostream>//�㷨��Ҫ˼�룺�����������ȱȽ�����λ����λ����ͬ��������ٱȽϴ�С������algorithm�е�sort������ȽϿ�ʵ�� 
#include<algorithm>
using namespace std;
bool compare(string a,string b)
{
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a<b;
}
int main()
{
    int N;
    while(cin>>N)
    {
        string a[N];
        for(int i=0;i<N;i++) 
             cin>>a[i];
        sort(a,a+N,compare);
        for(int i=0;i<N;i++) 
            cout<<a[i]<<endl;
    }
}
