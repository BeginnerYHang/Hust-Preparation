#include<iostream>
using namespace std;
int main()
{
	int N;
	while(cin>>N)
	{
		if(N==1)
	    cout<<"1"<<endl;
	    if(N==2)
	    cout<<"2"<<endl;
    	if(N>2)
	   {int t;
	 t=N-2;
	 int a=1,b=2,c; 
	  while(t--)
	  {
     c=a+b;
	 a=b;
	 b=c;
    }
    cout<<c<<endl;
	}
}
    return 0;
}
