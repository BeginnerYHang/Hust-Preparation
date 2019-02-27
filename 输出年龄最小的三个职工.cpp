#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct employee
{
    int num;
    string name;
    int age;
};//先定义结构体，后定义函数体

bool compare(employee A,employee B)
{
    if(A.age!=B.age)
        return A.age<B.age;
    if(A.num!=B.num)
        return A.num<B.num;
    return A.name<B.name;
}
//构造职工结构体
int main()
{
    int N;
    while(cin>>N)
    {
    struct employee e[N];
    for(int i=0;i<N;i++)
    {
      cin>>e[i].num>>e[i].name>>e[i].age;
    }
    sort(e,e+N,compare);
    if(N>3)
      N=3;
    for(int i=0;i<N;i++)
    {
        cout<<e[i].num<<" "<<e[i].name<<" "<<e[i].age<<endl;
    }
        
    }
    
   return 0;
}
