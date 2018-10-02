
#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
	int par;
	ll sum;
	int cnt;
	vector<ll >child;
};
ll a[100020];
vector<node> g(100010);
bool vis[100010]={0};
void dfs(int u,int par){
	vis[u]=1;
	g[u].par = par;
	g[u].sum = g[par].sum + a[u];
	g[u].cnt=g[u].cnt +1;
	for(int i=0;i<g[u].child.size();i++){
		int v=g[u].child[i];
		if(!vis[v]){
			dfs(v,u);
		}
	}
}
int main(int argc, char const *argv[])
{
	ll n,q;cin>>n>>q;
	
	for (int i=0; i<n; i++)
		cin>>a[i];
	a[-1]=0;
	g[-1].sum=0;g[-1].cnt=0;
     for(int i=0;i<n-1;i++){
     	int u,v;
     	cin>>u>>v;
     	g[u].child.push_back(v);
     }
     dfs(1,-1);
     for(int i=0;i<n;i++)
     	cout<<g[u].par<<" "<<g[u].sum<<" "g[u].cnt<<endl;
	return 0;
}