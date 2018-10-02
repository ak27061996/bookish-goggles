#include <bits/stdc++.h>
#define gc getchar()
#define ll long long
#define N 1000009
#define inf (ll)1e18
using namespace std;
ll n,len[N],dp[N],M1,M2;
vector<ll> a[N];
ll read()
{
	ll x=1;
	char ch;
	while (ch=gc,ch<'0'||ch>'9') if (ch=='-') x=-1;
	ll s=ch-'0';
	while (ch=gc,ch>='0'&&ch<='9') s=s*10+ch-'0';
	return x*s;
}
int main()
{
	ll T=read();
	while (T--)
	{
		n=read();
		for (ll i=1;i<=n;i++)
		{
			a[i].resize(len[i]=read());
			for (ll j=0;j<len[i];j++) a[i][j]=read();
		}
		for (ll i=0;i<len[1];i++)
			dp[i]=0;
		ll Ans=0;
		for (ll i=1;i<n;i++)
		{
			M1=-inf,M2=-inf;
			for (ll j=0;j<len[i];j++)
			{
				M1=max(M1,dp[j]+i*a[i][j]);
				M2=max(M2,dp[j]-i*a[i][j]);
			}
			for (ll j=0;j<len[i+1];j++)
				dp[j]=max(M1-i*a[i+1][(j+1)%len[i+1]],M2+i*a[i+1][(j+1)%len[i+1]]);
		}
		for (ll i=0;i<len[n];i++)
			Ans=max(Ans,dp[i]);
		printf("%lld\n",Ans);
	}
	return 0;
}