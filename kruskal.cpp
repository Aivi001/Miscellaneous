#include<bits/stdc++.h>
using namespace std;
//typedef pair < int ,int > iPair;


int find (int u)
{

if(u!=parent[u])
parent[u]=find(parent[u]);
return parent[u];

}

void merge ( int u,int v)
{

	u=find(u);
	v=find(v);

	if(rank[u]>rank[v])
		parent[v]=u;
	else 
		parent[u]=v;

	if(rank[u]==rank[v])
		rank[v]++;

}




int main()
{
int v,e,vertex,u,w;
vector< pair < int , iPair > graph;
vertex=9;e=14;

for(int i=0;i<e;i++)
{
cin>>u>>v>>w;
graph.push_back({w,{u,v}});
}

findMST(graph,vertex);


return 0;
}
