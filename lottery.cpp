#include <bits/stdc++.h>
using namespace std;
int convert(int *b){
   int rs=0;
   for(int i=0;i<10;i++){
   	rs=rs+b[i]*(1<<i);
   }
   return rs;
}
int findallxorpair(int x,int n,int *a){
	map<int, int> m;
	for(int i=0;i<n;i++){
		m[a[i]]++;
	}
	int rs=0;
	for(int i=0;i<n;i++){
		int xx=x^a[i];
		rs=rs+m[xx];
	}
	return rs;
}
int main(int argc, char const *argv[])
{
		int n;
		cin>>n;
		vector<string> v(n);
		int a[n];
		for (int i = 0; i < n; i++){
			cin>>v[i];
			int b[10]={0};
			sort(v[i].begin(),v[i].end());
			v[i].erase(unique(v[i].begin(),v[i].end()),v[i].end());
			for(int j=0;j<v[i].length();j++)
				b[v[i][j]-'0']=1;
			a[i]=convert(b);
			cout<<a[i]<<endl;
		}
		cout<<findallxorpair(1023,n,a)<<endl;	
	return 0;
}