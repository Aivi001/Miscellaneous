#include<bits/stdc++.h>
using namespace std;

int main()
{
map<long long,long long>val;
vector<long long>v;
long long n,m,k,s,x,i;

cin>>n>>m>>k;

for(i=0;i<(n+m+k);i++)
{
	cin>>x;
	val[x]++;
}

map<long long,long long>::iterator it;

for(it=val.begin();it!=val.end();it++)
{
if(it->second>=2)
v.push_back(it->first);
}

cout<<v.size()<<"\n";
for(i=0;i<v.size();i++)
cout<<v[i]<<"\n";

return 0;
}
