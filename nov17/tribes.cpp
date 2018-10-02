#include<bits/stdc++.h>
using namespace std;
void print(char *a,int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
pair<int ,int> fn(string s){
  int n=s.length();
  char a[n],b[n];
  a[0]=s[0];
  b[n-1]=s[n-1];
   for (int i = 1; i < n; i++){
   	  if(s[i]=='.') a[i]=a[i-1];
   	  else a[i]=s[i];
   }
   //print(a,n);
   for (int i = n-2; i >=0; i--){
   	  if(s[i]=='.') b[i]=b[i+1];
   	  else b[i]=s[i];
   }
   //print(b,n);
   int ra=0,rb=0;
  for(int i=0;i<n;i++){
  	if(a[i]==b[i]&&a[i]=='A') ra++;
  	if(a[i]==b[i]&&a[i]=='B') rb++;
  }

   return make_pair(ra,rb);
}


int main(){
	int t;
	for(cin>>t;t--;){
		string s;
		cin>>s;
		cout<<fn(s).first<<" "<<fn(s).second<<endl;;
	}
}