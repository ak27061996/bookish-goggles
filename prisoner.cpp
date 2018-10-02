#include <bits/stdc++.h>
#define ll long long
#define ps push_back
#define F first
#define S second
#define mp make_pair
//template<class T>T max(T a,T b){return a>b?a:b;}
//template<class T>T min(T a,T b){return a<b?a:b;}
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return (a*(b/gcd(a,b)));}
using namespace std;

int main()
{
    int t;
    for(cin>>t;t--;){
   int n;
   cin>>n;
   int a[n+1][n+1],dp[n+1][n+1]={0};
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
    if(a[i][0]==0){
       dp[i][0]=1;
    }else break;
    }
    for(int i=0;i<n;i++){
    if(a[0][i]==0){
       dp[0][i]=1;
    }else break;
    }
    
    for(int i=1;i<n;i++){
      for(int j=1;j<n;j++){
      if(a[i][j]==0){
          dp[i][j]=max(dp[i][j],(dp[i-1][j]>0?dp[i-1][j]:0)+(dp[i][j-1]>0?dp[i][j-1]:0)+(dp[i][j+1]>0?dp[i][j+1]:0)+(dp[i+1][j]>0?dp[i+1][j]:0));
      }
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
      cout<<dp[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<dp[n-1][n-1]<<endl;
    }
    return 0;
}
