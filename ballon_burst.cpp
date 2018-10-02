//https://leetcode.com/problems/burst-balloons/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz(s) (int)s.size()
#define bitcount __builtin_popcount
#define all(v) v.begin(),v.end()
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define PI acos(-1)
ll gcd(ll a,ll b){return (b==0?a:gcd(b,a%b));}
ll pow_M(ll a,ll b,ll m){ll res=1;while(b){if(b&1)res=(res*a)%m;a=(a*a)%m;b>>=1;}return res;}
string myToString(ll n){   //inbuilt function for this is = to_string(n);
ostringstream s; s<<n;return s.str();} 
   bool com(pair<int ,int>a,pair<int ,int>b){
        return a.first<b.first;
    }
    void print(vector<pair<int ,int> >& a){
        int n=a.size();
        for(int i=0;i<n;i++){
            cout<<a[i].first<<" ";
        }
    }
    int maxCoins(vector<int>& a) {
       
        //print(v);
        int rs=0;  int n=a.size();
        vector<pair<int ,int> >v;
        for(int i=1;a.size()!=2;i++){
            n=a.size();
            for(int j=0;j<n;j++)
                v.push_back(mp(a[j],j));
          
            sort(v.begin()+1,v.begin()+n-1,com);

            int  ii=v[1].second;
            rs=rs+a[ii+1]*a[ii-1]*a[ii];
            a.erase(a.begin()+ii);
            v.clear();
        }
        rs=rs+max(a[0],a[1])*min(a[0],a[1]) + max(a[0],a[1]);
        //cout<<a[0]<<" "<<a[1]<<endl;
        return rs;
    }


int maxCoins(vector<int>& nums) {
    int N = nums.size();
    nums.insert(nums.begin(), 1);
    nums.insert(nums.end(), 1);

    // rangeValues[i][j] is the maximum # of coins that can be obtained
    // by popping balloons only in the range [i,j]
    vector<vector<int>> rangeValues(nums.size(), vector<int>(nums.size(), 0));
    
    // build up from shorter ranges to longer ranges
    for (int len = 1; len <= N; ++len) {
        for (int start = 1; start <= N - len + 1; ++start) {
            int end = start + len - 1;
            // calculate the max # of coins that can be obtained by
            // popping balloons only in the range [start,end].
            // consider all possible choices of final balloon to pop
            int bestCoins = 0;
            for (int final = start; final <= end; ++final) {
                int coins = rangeValues[start][final-1] + rangeValues[final+1][end]; // coins from popping subranges
                coins += nums[start-1] * nums[final] * nums[end+1]; // coins from final pop
                if (coins > bestCoins) bestCoins = coins;
            }
            rangeValues[start][end] = bestCoins;
        }
    }
    return rangeValues[1][N];
}





    
int brueteforce(vector<int> a){

}
int main()
{	
	int t;
	for(cin>>t;t--;){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<brueteforce(a)<<" "<<maxCoins(a)<<endl;;
	}
}