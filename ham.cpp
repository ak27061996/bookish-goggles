
#include <iostream>
#include<ios>
#include<algorithm>
#include<vector>
using namespace std;
int n;
const int N = 1e5+10;
int arr[N];
int brr[N];
typedef pair<int,int> pii;
int one[N],two[N],lone,ltwo;
int hrr[N][2];
int srr[N];
int solve(){
    for(int index = 1; index <= n; index++) brr[index] = arr[index];
    fill(srr,srr+N,0);
    for(int index = 1; index <= n; index++){
        hrr[arr[index]][srr[arr[index]]++] = index;
    }
    lone = ltwo = 0;
    one[0] = two[0] = 0;
    for(int i = 1; i < N; i++){
        if(srr[i] == 2)    two[ltwo++] = i;
        else if(srr[i] == 1) one[lone++] = i;
    }
    cout<<"fuck Off";
	//// srr[I] == 1 means that data(i) only one time occur /// and 2 means 2 times 
    for(int index = 1; index < lone; index++){
        brr[hrr[one[index-1]][0]] = one[index];
    }
    if(lone > 1){
        brr[hrr[one[lone-1]][0]] = one[0];
    }
    for(int pi,di,index = 1; index < ltwo; index++){
        brr[hrr[two[index-1]][0]] = two[index];
        brr[hrr[two[index-1]][1]] = two[index];
    }
    if(ltwo > 1){
        brr[hrr[two[ltwo-1]][0]] = two[0];
        brr[hrr[two[ltwo-1]][1]] = two[0];
    }
    //cout<<lone<<" "<<ltwo<<".......\n";
    bool f = true;
    /// 
    if(ltwo != 0 && lone != 0 && (!(lone > 1 && ltwo > 1)) ){
        for(int index = 0; index < min(2,lone); index++){
            if(f){
                int data = brr[hrr[two[0]][0]];
                brr[hrr[two[0]][0]] = brr[hrr[one[index]][0]];
                brr[hrr[one[index]][0]] = data;
            }
            else{
                int data = brr[hrr[two[0]][1]];
                brr[hrr[two[0]][1]] = brr[hrr[one[index]][0]];
                brr[hrr[one[index]][0]] = data;
            }
            f = !f;
        }
    }
    int res = 0;
    for(int index = 1; index <= n; index++) if(arr[index] != brr[index]) res++;
    return res;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc; cin>>tc;
    while(tc--){
        cin>>n;
        for(int index = 1; index <= n; index++) cin>>arr[index];
        cout<<solve()<<"\n";
        for(int index = 1; index <= n; index++)  cout<<brr[index]<<" ";
        cout<<"\n";
    }
    return 0;
}