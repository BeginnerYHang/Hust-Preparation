#include<iostream>//算法主要思想：大整数排序先比较数的位数，位数相同的情况下再比较大小，利用algorithm中的sort函数会比较快实现 
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
