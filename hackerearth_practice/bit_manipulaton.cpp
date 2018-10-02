#include<bits/stdc++.h>
using namespace std;
//xor from 1 to n direct 
int xor_one_to_n(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    return 0;
}
//  a+i =a xor i if(0<=i<=n)
 int xor_sum_less_than_n(int n){
     
    return pow(2,cnt);//cnt=count 0;
 }
// power of 2 or not
bool power_of_two(int x){
    return x&&(!(x&(x-1)));
}
unsigned int getFirstSetBitPos(int n){
return log2(n&-n)+1;
}

void findSetPositions(int n){
    while(n>0){
           printf(" %u ", nextPos(n));
           n=n^(1<<(log2(n&-n)));
           //cout<<n<<" ";
    }
}
int main(){

}
