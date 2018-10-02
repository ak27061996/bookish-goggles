
#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
 
ll pwr(ll base, ll p, ll mod = MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}
 
 
ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}
 
 
 
const int K = 18;
const int N = 1 << K;
const int mod = 3 * N + 1;
const int G = 10;
 
 
int arr[N], rev[N];
int x_mod3_0[N], x_mod3_1[N], x_mod3_2[N];
int ans[mod], pwg[mod];
 
 
void pre(){
    for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < K ; ++j){
            if((i >> j) & 1){
                rev[i] |= 1 << (K - j - 1);
            }
        }
    }
}
 
void fft(int a[]){
    for(int i = 0 ; i < N ; ++i){
        if(rev[i] > i){
            swap(a[i] , a[rev[i]]);
        }
    }
    for(int size = 2 ; size <= N ; size += size){
        int w = pwg[3];
        for(int i = size ; i < N ; i += i){
            w = (1LL * w * w) % mod;
        } 
        int m = size >> 1;
        for(int i = 0 ; i < N ; i += size){
            int cur = 1;
            for(int j = 0 ; j < m ; ++j){
                int v = a[i + j];
                int u = (1LL * a[i + j + m] * cur) % mod;
                a[i + j] = u + v - ((u + v) >= mod) * mod;
                a[i + j + m] = v - u + (u > v) * mod;
                cur = (1LL * cur * w) % mod;
            }
        }
    }
}
 
void print(int *a,int n){
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
} 
 
int main(){
	int n;
	scanf("%d", &n);
 
	pwg[0] = 1;
	for(int i=1;i<mod;i++){
		pwg[i] = (G * 1LL * pwg[i-1]) % mod;
	}
       cout<<"pwg\n";
       print(pwg,20);


	for(int i=0;i<=n;i++){
		scanf("%d", &x_mod3_0[i]);
		ans[0] = x_mod3_0[0];
		x_mod3_1[i] = (1LL * pwg[i] * x_mod3_0[i]) % mod;
		x_mod3_2[i] = (1LL * pwg[2*i] * x_mod3_0[i]) % mod;
	}

    cout<<"xmod0\n";
    print(x_mod3_0,n);

    cout<<"xmod1\n";
    print(x_mod3_1,n);

    cout<<"xmod2\n";
    print(x_mod3_2,n);

 
	pre();//rev calculate
    cout<<"rev\n";
    print(rev,20);


	fft(x_mod3_0);
    print(x_mod3_0,n);
	fft(x_mod3_1);
    print(x_mod3_1,n);
	fft(x_mod3_2);
    print(x_mod3_2,n);

	for(int i=0;i<N;i++){
		ans[pwg[3*i]] = x_mod3_0[i];
		ans[pwg[3*i+1]] = x_mod3_1[i];
		ans[pwg[3*i+2]] = x_mod3_2[i];
	}
 
 
	int q;
	scanf("%d", &q);
	while(q--){
		int x;
		scanf("%d", &x);
		printf("%d\n", ans[x]);
	}
    return 0;
}