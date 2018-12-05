#include<bits/stdc++.h>
using namespace std;

int main()
{

vector<int>str;
stack<int>st;
long long n,i,s,l,cnt=0,maxi=0,start=1,prev;
int x;

cin>>n;
for(i=0;i<n;i++)
{
cin>>x;
str.push_back(x);
}

for(i=0;i<n;i++)
{
if(st.empty())
{
	prev=start;
	s=i+1;
	st.push(1);
	cnt=1;
}

else if(str[i]==1)
{
	cnt=st.size();
	st.push(1);
	if(maxi>cnt)
	start=prev;
	else
	start=s;
	maxi=max(maxi,cnt);
	
}

else
	st.pop();

}
cout<<maxi<<" "<<start<<" ";
return 0;
}
