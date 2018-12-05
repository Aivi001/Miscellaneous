#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,j,min,n,a[12];

cin>>n;

for(i=0;i<n;i++)
	cin>>a[i];

for(i=0;i<n;i++)
{
	min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
			min=j;
	}
	swap(a[i],a[min]);

}

for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n";	


return 0;
}
