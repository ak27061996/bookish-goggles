// first solution
using namespace std;
const int MOD=1000003;
long long C(int n,int r,int m)
{
    vector<long long> dp(r+1,0);
    dp[0]=1;
    for(int i=0;i<=n;++i)
    {
        for(int j=min(r,i);j>0;--j)
        dp[j]=(dp[j-1]+dp[j])%m;
    }
    return dp[r];
}
long long lucas(long n,long r,long long m)
{
    if(r==0) return 1;
    long long ni=n%m;
    long long ri=r%m;
    if(ri>ni) return 0;
    return (lucas(n/m,r/m,m) * C(ni,ri,m))%m;
}
void getPrimes(vector<int> &puf)
{
    vector<bool> p(50,true);
    for(int i=2;i*i<=50;++i)
    {
        if(p[i])
        {
            for(int j=2*i;j<=50;j +=i)
            p[j]=false;
        }
    }
    for(int i=2;i<p.size();++i) if(p[i]) puf.emplace_back(i);
}
long long crt(vector<long long> &factors,vector<long long> &remainders)
{
    long long x=0;
    while(1)
    {
        int i;
        for(i=0;i<factors.size();++i)
        if(x%factors[i]!=remainders[i])
        break;
        if(i==factors.size()) return x;
        ++x;
    }
    return x;
}
int main()
 {
    int t;
    long long n,r,m;
    vector<int> puf;
    getPrimes(puf);
    cin>>t;
    while(t--)
    {
       cin>>n>>r>>m;
       vector<long long> factors;
       for(auto &x:puf) if(m%x==0) factors.emplace_back(x);
       vector<long long> remainders;
       for(auto &x:factors) remainders.emplace_back(lucas(n,r,x));
       cout<<crt(factors,remainders)<<endl;
    }
    return 0;
}



/*********************Second solution***************************************/
using namespace std;
#define fr(i, p, n) for(int i = (int )p; i < (int )n; i++)
#define rev(i, n, p) for(int i = (int )n; i >= (int )p; i--)
typedef long long int LL;
const int mod = 1e9 + 7;
const int mx = 1e5 + 1;
int lpf[mx];
LL x, y;
int c[mx];
void prec() {
    for(int i = 2; i * i < mx; i++)
        if(!lpf[i])
            for(int j = i; j < mx; j += i)
                if(!lpf[j])
                    lpf[j] = i;
    fr(i, 1, mx)
        if(!lpf[i])
            lpf[i] = i;
}
vector< int> factorize(int m) {
    vector< int> v;
    while(m > 1) {
        int p = 1, tn = lpf[m];;
        while(tn == lpf[m]) {
            p *= tn;
            m /= tn;
        }
        if(p > 1)
            v.push_back(p);
    }
    /*fr(i, 0, v.size()) cout << v[i] << " ";
        cout << endl;*/
    return v;
}
void ExtendedEuclid(int a, int b) {
    if(!b) {
        x = 1;
        y = 0;
    }
    else {
        ExtendedEuclid(b, a%b);
        LL temp = x;
        x = y;
        y = temp - (a/b)*y;
    }
}
int modPower(int a, int p, int m) {
    long long int ans = 1;
    a %= m;
    while(p) {
        if(p&1)
            ans = (ans*a)%m;
        a = ((LL)a*a)%m;
        p >>= 1;
    }
    return ans;
}
int inv(int a, int m) {
    ExtendedEuclid(a, m);
    return (x%m + m)%m;
}
int Com(int n, int r, int m) {
    if(n < r)
        return 0;
    LL num = c[n];
    int den = ((LL)c[r]*c[n-r]) % m;
    //cout<<c[r]<<" "<<c[n-r];
    return (num * inv(den, m)) % m; // modPower(c[r], m-2, m)*modPower(c[n-r], m-2, m)
}
int LCom(LL n, LL r, int m) { // m = v[i]
    if(r > n)
        return 0;
    if(r == 0)
        return 1;
    int ni = n % m, ri = r % m;
    //cout<<ni<<" "<<ri<<" ";
    return ((LL )LCom(n/m, r/m, m) * Com(ni, ri, m)) % m;
}
int CRT(vector< int> &r, vector< int> &v) {
    int prod = 1, n = r.size(), res = 0;
    fr(i, 0, n) prod *= v[i];
    fr(i, 0, n) {
        int tm = prod / v[i];
        res = (res + (r[i] * tm * inv(tm, v[i])) % prod) % prod;
    }
    return res;
}
int main() {
    int t;
    cin >> t;
    prec();
    while(t--) {
        //int m = 13 * 17 * 19 * 53, N = 5, R = 2;
        
        LL N, R;
        int m;
        cin >> N >> R >> m;
        c[0] = 1;
        for(int i=1; i<mx; i++)
            c[i] = ((LL)i*c[i-1]) % m;
        vector< int> v = factorize(m), r;
        fr(i, 0, v.size())
                r.push_back(LCom(N, R, v[i]));
        cout << CRT(r, v) << "\n";
    }
    return 0;
}
/*
Input:
30107 9041 470

Its Correct output is:
380
*/



/********************By Deviding prime****************************************/
#include<iostream>
using namespace std;
#include<vector>
 
/* This function calculates power of p in n! */
int countFact(int n, int p)
{
    int k=0;
    while (n>0)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}
 
/* This function calculates (a^b)%MOD */
long long pow(int a, int b, int MOD)
{
    long long x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
 
long long C(int n, int r, int MOD)
{
    long long res = 1;
    vector<bool> isPrime(n+1,1);
    for (int i=2; i<=n; i++)
        if (isPrime[i])
        {
            for (int j=2*i; j<=n; j+=i)
                isPrime[j]=0;
            int k = countFact(n,i) - countFact(r,i) - countFact(n-r,i);  
            res = (res * pow(i, k, MOD)) % MOD;
        }
    return res;
}
 
int main()
{
    int n,r,m;
    while (scanf("%d%d%d",&n,&r,&m))
    {
        printf("%lld\n",C(n,r,m));
    }
}