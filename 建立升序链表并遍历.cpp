/*��Ŀ����
����һ�������������������
��������:
�����ÿ�������е�һ�а���1��������n(1<=n<=1000)����������һ�а���n��������
�������:
�����ж���������ݣ�����ÿ�����ݣ�
��n������������������֮��������������*/ 
#include<iostream>
#include<cstdlib>//malloc���� 
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;
void insert_node(LinkList &L,int a){//�������в����㣬����������
    LinkList t,temp,p;
    t=(LinkList)malloc(sizeof(LNode));//�½���㣻
    t->data=a;
    t->next=NULL;
    if(L==NULL){//�ǵ�һ����㣻
        L=t;
    }
    else{
        temp=(LinkList)malloc(sizeof(LNode));
        p=(LinkList)malloc(sizeof(LNode));
        temp=L;
        p=L;
        if(a<=temp->data){//�����ڱ�ͷ��
            t->next=temp;
            L=t;
        }
        else{
            while(temp!=NULL&&a>temp->data){//����ƶ�
                p=temp;//pָ��ǰ����
                temp=temp->next;
            }
        t->next=p->next;//�����㣻
        p->next=t;
        }
    }
}
 
void traverse(LinkList L){//��������
    LinkList temp;
    if(L!=NULL)
    {
        temp=L;
        while(temp!=NULL)
        {
            cout<<temp->data<<' ';
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main()
{
    int N;
    while(cin>>N)
    {
        LinkList L;//����������ָ��
        L=NULL;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[N];
            insert_node(L,a[N]);//�ڲ�ʧ�������²���ڵ� 
        }
        traverse(L);
    }
    return 0;
}
