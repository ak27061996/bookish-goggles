#include <bits/stdc++.h>
     
    using namespace std;
     
    const int N=100010;
     
    int n,q,b[N],v[N],L[N],R[N];
    vector<int> a[N];
     
    inline char nc(){
    	static char buf[100000],*p1=buf,*p2=buf;
    	return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
    }
     
    inline void rea(int &x){
    	char c=nc(); x=0;
    	for(;c>'9'||c<'0';c=nc());for(;c>='0'&&c<='9';x=x*10+c-'0',c=nc());
    }
     
    inline int dis(int g,int x,int y){
    	if(x>y) swap(x,y); x--; y--;
    	return min(a[g][y]-a[g][x],a[g][a[g].size()-1]-a[g][y]+a[g][x]);
    }
     
    int main(){
    	int t; rea(t);
    	while(t--){
    		rea(n); rea(q);
    		for(int i=1;i<=n;i++){
    			int m; rea(m); a[i].resize(m+1);
    			for(int j=1;j<=m;j++)
    				rea(a[i][j]),a[i][j]+=a[i][j-1];
    		}
    		for(int i=1,u,v;i<=n;i++)
    			rea(u),rea(v),rea(b[i]),R[i]=u,L[i%n+1]=v;
    		for(int i=1;i<=n;i++)
    			v[i]=v[i-1]+dis(i,L[i],R[i])+b[i];
    		while(q--){
    			int u1,c1,u2,c2;
    			rea(u1); rea(c1); rea(u2); rea(c2);
    			if(c1==c2) printf("%d\n",dis(c1,u1,u2));
    			else{
    				if(c1>c2) swap(c1,c2),swap(u1,u2);
    				printf("%d\n",min(dis(c1,u1,R[c1])+dis(c2,u2,L[c2])+v[c2-1]-v[c1-1]-dis(c1,L[c1],R[c1]),dis(c1,u1,L[c1])+dis(c2,u2,R[c2])+v[n]-v[c2]+v[c1-1]+b[c2]));	
    			}
    		}
    		for(int i=1;i<=n;i++) a[i].clear();
    	}
    	return 0;
    } 