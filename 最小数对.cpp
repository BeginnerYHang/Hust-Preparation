#include<iostream>
#define InitMin 0x7fffffff;
using namespace std;
struct number
 {
    int x;
    int y;
 };
int main()
{
    int n;
    while(cin>>n)
    {
        struct number a,Min;
        Min.x=InitMin; 
        Min.y=InitMin;
        while(n--)
        {
            cin>>a.x>>a.y;
            if((a.x<Min.x)||(a.x==Min.x&&a.y<Min.y))
                {
                	Min=a;
				}
        }
        cout<<Min.x<<" "<<Min.y;
    }
    return 0;
}
