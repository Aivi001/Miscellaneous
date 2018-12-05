#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,k,x,i,j,cnt=0;
vector<long long>val;

cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>x;
val.push_back(x);
}

sort(val.begin(),val.end());

for(i=0,j=1;i<n;)   //don't have j as i+1 , since we need to get the count of the different pairs possible
{
	if(abs(val[i]-val[j])>=k)
	{
		cnt+=(n-j);
		i++;
	}

	else
	{
		j++;
		
	}

}
cout<<cnt<<"\n";

return 0;
}
