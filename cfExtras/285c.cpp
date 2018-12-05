#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,i,x,res=0;


cin>>n;
vector<long long>seq;
for(i=0;i<n;i++)
{
cin>>x;
seq.push_back(x);
}

sort(seq.begin(),seq.end());

for(i=0;i<n;i++)
{
//cout<<res;
	res+=abs((i+1)-seq[i]);
//cout<<res;
}   //this is because, for n=3, perm shd be 1 2 3 or 1 3 2, comparing this with the given perm, like -1 -1 2;
cout<<res<<"\n";

return 0;
}
