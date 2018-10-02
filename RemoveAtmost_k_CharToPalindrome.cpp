#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main(){
int t;
for(cin>>t;t--;){
int n,k;
cin>>n>>k;
string s;
cin>>s;
int tb[n+1][n+1]={0};
for(int i=0;i<n;i++) tb[i][i]=1;
for(int i=2;i<=n;i++){
    for(int j=0;j<n-i+1;j++){
        if(s[j+i-1]==s[j]){
            //cout<<s.substr(j,i)<<endl;
            tb[j+i-1][j]=1;//(tb[j+i-2][j+1]||(i==2));
        }
    }
}
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout<<tb[i][j]<<" " ;
//     }
//     cout<<endl;
// }
int rs=0;
for(int i=n-1,j=0;i>=n/2;i--,j++){
    //cout<<tb[i][j]<<" "<<i<<" ";
    if(!tb[i][j]) rs++;
}
//cout<<rs<<endl;
rs=(2*rs-1<=k)?1:0;
cout<<rs<<endl;

}
	return 0;
}