ll _sieve_size; 
bitset<10000010> bs; 
vec<ll> primes;
bool com(pair<ll,ll>a,pair<ll,ll>b){
  ///return a.second<b.second;
  return a.second>b.second;
}
void sieve(ll upperbound) { 
   _sieve_size = upperbound + 1;
    bs.reset(); bs.flip(); 
   bs.set(0, false); bs.set(1, false); 
for (ll i = 2; i < _sieve_size; i++) 
   if (bs.test((size_t)i)) {
    for (ll j = i * i; j < _sieve_size; j += i) 
	       bs.set((size_t)j, false);
      primes.psb((int)i); 
  }
}
int szz;
bool isPrime(ll N) { 
  if (N < _sieve_size) 
    return bs.test(N); 
 for (int i= 0;i< szz;i++) 
   if (N % primes[i] == 0) 
    return false;
return true; 
} 
vec<pair<ll,ll> > primeFactors(ll N) {
vec<pair<ll,ll> > factors; 
int PF_idx = 0, PF = primes[PF_idx]; 
   while (N != 1 && (PF * PF <= N)) { ll e=0;
       while (N % PF == 0) {e++; N /= PF;  }
       if(e>0) factors.psb(mp(PF,e)); 
      PF = primes[++PF_idx]; 
   }
if (N != 1) factors.psb(mp(N,1)); 
return factors;
}
ll mul(vec<pair<ll,ll> > v){
  ll ans =1;
  //cout<<" fact= ";
   for(int i=0;i<v.size();i++){
    //cout<<v[i].second+1<<" ";
     ans=ans*(v[i].second+1);
   }
   //cout<<"\n"<<ans<<"\n";
   return ans;
}