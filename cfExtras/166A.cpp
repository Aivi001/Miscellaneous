#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int>&a,pair<int,int>&b)
{
return (a.first>b.first||(a.first==b.first&&a.second<b.second));
}


int main()
{
int n,k,x,y,left,right;
vector<pair<int,int>>pos;

cin>>n>>k;

for(int i=0;i<n;i++)
{
cin>>x>>y;
pos.push_back(make_pair(x,y));
}

sort(pos.begin(),pos.end(),cmp);

left=right=k;

while(left>0 && pos[left-1].first==pos[k].first&&pos[left-1].second==pos[k].second)
{
--left;
}

while(right+1<n && pos[right+1].first==pos[k].first&&pos[right+1].second==pos[k].second)
{
++right;
}

cout<<right-left+1<<"\n";  //scan the entire sorted list from k 

return 0;
}
