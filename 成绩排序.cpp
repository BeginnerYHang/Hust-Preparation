/*��Ŀ����
��N��ѧ�������ݣ���ѧ�����ݰ��ɼ��ߵ���������ɼ���ͬ�������ַ�����ĸ�����������������ĸ��Ҳ��ͬ����ѧ�����������򣬲����N��ѧ����������Ϣ��
��������:
���������ж��飬ÿ�������һ����һ������N��N<=1000������������N�а���N��ѧ�������ݡ�
ÿ��ѧ�������ݰ������������Ȳ�����100���ַ����������䣨�����������ɼ���С�ڵ���100����������
�������:
��ѧ����Ϣ���ɼ��������򣬳ɼ���ͬ������������ĸ���������
Ȼ�����ѧ����Ϣ���������¸�ʽ��
���� ���� �ɼ�

ѧ����������ĸ��������ĸ�Ĵ�Сд����AҪ��a����ĸ��ǰ(��ΪA��ASC���a��ASC��ҪС)��*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct student
{
    string name;
    int age;
    unsigned int grade;
};
bool compare(student A,student B)
{
    if(A.grade!=B.grade)
        return A.grade<B.grade;
    if(A.name!=B.name)
        return A.name<B.name;
    return A.age<B.age;
}
int main()
{
    int N;
    while(cin>>N)
    {
        struct student s[N];
        for(int i=0;i<N;i++)
        {
            cin>>s[i].name>>s[i].age>>s[i].grade;
        }
        sort(s,s+N,compare);
        for(int i=0;i<N;i++)
        {
            cout<<s[i].name<<' '<<s[i].age<<' '<<s[i].grade<<endl;
        }
    }
}
