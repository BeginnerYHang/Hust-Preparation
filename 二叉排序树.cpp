/*������������Ҳ��Ϊ�����������������һ�ſ�����Ҳ������һ�ž����������Եķǿն������� 1. ���������ǿգ��������������нڵ�ؼ���ֵ�������ڸ��ڵ�Ĺؼ���ֵ�� 2. ���������ǿգ��������������нڵ�ؼ���ֵ����С�ڸ��ڵ�Ĺؼ���ֵ�� 3. ������������Ҳ��һ�Ŷ����������� ���ڸ���N���ؼ���ֵ������ͬ�Ľڵ㣬Ҫ���㰴˳�����һ����ʼΪ�����Ķ����������У�ÿ�β����ɹ�������Ӧ�ĸ��׽ڵ�Ĺؼ���ֵ�����û�и��׽ڵ㣬�����-1��
��������:
�����������������ݣ�ÿ������������С�
��һ�У�һ������N��N<=100������ʾ������Ľڵ�����
�ڶ��У�N��������ͬ������������ʾҪ˳�����ڵ�Ĺؼ���ֵ����Щֵ������10^8��
�������:
�����N�У�ÿ�β���ڵ�󣬸ýڵ��Ӧ�ĸ��׽ڵ�Ĺؼ���ֵ��*/
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct BiTNode{
    int data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;//����������ʽ�洢�ṹ
int InsertBiTNode(BiTree &T,int temp,int pre)//�ֱ�Ϊ������ָ�룬����ڵ�ֵ�Լ����ڵ�ֵ
{
    if(T==NULL)
    {
        T=(BiTree)malloc(sizeof(BiTNode));
        T->data=temp;
        T->lchild=NULL;
        T->rchild=NULL;
        return pre;
    }
    else
    {
        if(temp>T->data)
            return InsertBiTNode(T->rchild,temp,T->data);
        else
            return InsertBiTNode(T->lchild,temp,T->data);
    }
}//���ڵ��������������в����ظ��׽ڵ�Ĺؼ���ֵ
int main()
{
    int N,a[N],FData;
    BiTree T=NULL;//���������ָ��
    while(cin>>N)
    {
      int temp;
        while(N--)
        {
            cin>>temp;
            cout<<InsertBiTNode(T,temp,-1)<<endl;
        }
    }
}
