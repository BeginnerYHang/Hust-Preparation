/*题目描述
建立一个升序链表并遍历输出。
输入描述:
输入的每个案例中第一行包括1个整数：n(1<=n<=1000)，接下来的一行包括n个整数。
输出描述:
可能有多组测试数据，对于每组数据，
将n个整数建立升序链表，之后遍历链表并输出。*/ 
#include<iostream>
#include<cstdlib>//malloc函数 
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;
void insert_node(LinkList &L,int a){//向单链表中插入结点，并保持升序
    LinkList t,temp,p;
    t=(LinkList)malloc(sizeof(LNode));//新建结点；
    t->data=a;
    t->next=NULL;
    if(L==NULL){//是第一个结点；
        L=t;
    }
    else{
        temp=(LinkList)malloc(sizeof(LNode));
        p=(LinkList)malloc(sizeof(LNode));
        temp=L;
        p=L;
        if(a<=temp->data){//结点插在表头；
            t->next=temp;
            L=t;
        }
        else{
            while(temp!=NULL&&a>temp->data){//向后移动
                p=temp;//p指向前驱；
                temp=temp->next;
            }
        t->next=p->next;//插入结点；
        p->next=t;
        }
    }
}
 
void traverse(LinkList L){//遍历链表；
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
        LinkList L;//定义链表首指针
        L=NULL;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[N];
            insert_node(L,a[N]);//在不失序的情况下插入节点 
        }
        traverse(L);
    }
    return 0;
}
