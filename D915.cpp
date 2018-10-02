//http://codeforces.com/problemset/problem/915/D
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
vector<int> g[100002];
int vis[1001]={0};
// bool iscycle(int v){
// 	if(vis[v]==false){
// 		vis[v]=true;
// 		rec[v]=true;
// 		for(int i=0;i<g[v].size();i++){
// 			if(!vis[g[v][i]] &&iscycle(g[v][i])){
// 				return true;
// 			}
// 			else if(rec[g[v][i]]) return true; 
// 		}
// 	}
// 	rec[v]=false;
//  return false;
// }
void dfs(int v,int &cnt){
	vis[v]=1;
	for(int i=0;i<g[v].size();i++){
		if(!vis[g[v][i]]){
			dfs(g[v][i],cnt);
		}else if(vis[g[v][i]]==1) cnt++;
	}
	vis[v]=2;
}
int  callme(int v){
	memset(vis,0,sizeof(vis));
	int cnt=0;
	dfs(v,cnt);
  for(int i=1;i<=n;i++){
  	if(!vis[i]){
  		dfs(i,cnt);
  	}
  }
  return cnt;
}
int main(int argc, char const *argv[])
{
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x ,y ;
		cin>>x>>y;
		g[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		int ss=callme(i);
		cout<<ss<<" ";
		if(ss<=1){
			cout<<"YES\n";
			return 0;
		}
	 }
	cout<<"NO\n";
	return 0;
}