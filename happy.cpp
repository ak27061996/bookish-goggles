
    #include<bits/stdc++.h>
    using namespace std;
    int par[1000000],vis[1000000];
    vector <int> graph[1000000];
    void dfs(int i)
    {
        vis[i]=1;
        for(int adj:graph[i])
        {
            if(vis[adj]==0)
            {
                par[adj]=i;
                dfs(adj);
            }
        }
    }
    int main(void)
    {
       // int p[100000];
        int n,m,i,u,v;
        cin>>n>>m;
        memset(vis,0,sizeof(vis));
        for(i=1;i<=m;i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                par[i]=-1;
                dfs(i);
            }
        }
        int count=0;
        for(i=1;i<=n;i++)
        {
            if(par[i]!=-1)
            {
                if(par[par[i]]==-1)
                {
                    if(graph[i].size()-1>graph[par[i]].size())
                    count++;
                }
            else
            {
                if(graph[i].size()>graph[par[i]].size())
                count++;
            }
            }
        }
        cout<<count<<endl;
    }