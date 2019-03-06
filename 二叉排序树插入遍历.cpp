#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Binode{
    int data;
    Binode *lchild,*rchild;
}Binode,*Bitree;
void Insert(Bitree &T,int temp)
{
    if(T==NULL)
    {
        T=(Bitree)malloc(sizeof(Binode));
        T->data=temp;
        T->lchild=NULL;
        T->rchild=NULL;
    }
    else
    {
        if(temp<T->data)
          Insert(T->lchild,temp);
        else if(temp>T->data)
          Insert(T->rchild,temp);
        return;
    }
}
void PreOrder(Bitree T)
{
    if(T!=NULL)
    {
        cout<<T->data<<' ';
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}//ǰ�����
void InOrder(Bitree T)
{
    if(T!=NULL)
    {
        InOrder(T->lchild);
        cout<<T->data<<' ';
        InOrder(T->rchild);
    }
}//�������
void PostOrder(Bitree T)
{
     if(T!=NULL)
    {
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        cout<<T->data<<' ';
    }
}//�������
int main()
{
   int N,a[N];
   while(cin>>N)
    {
       Bitree T=NULL;
      for(int i=0;i<N;i++)
      {
          int temp;
          cin>>temp;
          Insert(T,temp);
      }
      PreOrder(T);
       cout<<endl;
      InOrder(T);
       cout<<endl;
      PostOrder(T);
       cout<<endl;
    }
    return 0;
}
