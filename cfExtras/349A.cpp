#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,n,t=0,f=0,h,x,flag=0;

cin>>n;

cin>>x;
if(x==25)
{
	++t;
	for(i=1;i<n;i++)
	{
		cin>>x;
		if(x==25)
			++t;

	else if(x==50)
	{
		if(t<=0)
		{flag=1;
		break;
		}

	++f;
	--t;


	}
else
{
	//cout<<"t"<<t<<" f"<<f<<"\n";
	
	if(t<3&&f==0||t<=0&&f>0)
	{
	flag=1;
	break;
	}

	if(f>0)
	{
		--f;--t;
	}
	else
	{
		t-=3;
	}
}

}

}
else
	flag=1;

flag==1?cout<<"NO\n":cout<<"YES\n";

return 0;
}



