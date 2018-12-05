#include<bits/stdc++.h>
using namespace std;

int main()
{

int n,a[12],i,j;
cin>>n;

for(i=0;i<n;i++)
	cin>>a[i];

for(i=0;i<n;i++)
	for(j=0;j<n-2;j++)
		if(a[j]>a[j+1])
			swap(a[j],a[j+1]);

for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n";
return 0;
}
