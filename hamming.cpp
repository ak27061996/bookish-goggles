#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v){
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n),v,v1;
		for(int i=0;i<n;i++) cin>>a[i];
		v=a;
		reverse(v.begin(),v.end());
		int rs=0;
		for(int i=0;i<n;i++){
			//cout<<"asd";
			if(a[i]!=v[i]) rs++;
			else{
				if(i+1<n)
				swap(v[i],v[i+1]);
				if(a[i]!=v[i]) rs++;
			}
		}
		v1=v;
		int rs1=0;
		for(int i=n-1;i>=0;i--){
			if(a[i]!=v1[i]) rs1++;
			else{
				if(i-1>=0)
				swap(v1[i],v1[i-1]);
				if(a[i]!=v1[i]) rs1++;
			}
		}
		if(rs<rs1) {
			rs=rs1;
			//print(v1);
			v=v1;
		}
		cout<<rs<<endl;
		print(v);	
	}
}