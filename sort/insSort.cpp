#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[12],n,i,hole,val;

cin>>n;

for(i=0;i<n;i++)
	cin>>a[i];

for(i=1;i<n;i++)
{
	val=a[i];
	hole=i;

while(hole>0&&a[hole-1]>val)
{
	swap(a[hole],a[hole-1]);
	--hole;
}
	a[hole]=val;

}

for(i=0;i<n;i++)
	cout<<a[i]<<" ";
cout<<"\n";


return 0;
}
