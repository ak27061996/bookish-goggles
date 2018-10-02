#include <bits/stdc++.h>// 2 3 4 10 1 2
using namespace std;
#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TC int tc; cin>>tc; while(tc--)
template <class T > T amax(T _a, T _b ){        return _a > _b ? _a : _b;}
template <class T > T amin(T _a, T _b ){        return _a < _b ? _a : _b;}
int a,b,c;
int fun1(int x,int y,int z){
    if(x > y) swap(x,y);
    int ret = x*b;
    y -= x;
    int res = y*a+z*a;
    if(y > z) swap(y,z);
    int res2 = y*b;
    z -= y;
    res2 = res2 + z*a;
    ret += (res < res2 ? res : res2);
    return ret;
}
int fun2(int x,int y,int z){
    if(x > y) swap(x,y);
    if(x > z) swap(x,z);
    int ret = x*c;
    y -= x; z -= x;
    int res = y*a+z*a;
    if(y > z) swap(y,z);
    int res2 = y*b;
    z -= y;
    res2 = res2 + z*a;
    ret += (res < res2 ? res : res2);
    return ret;
}
#define rep(i,n) for(int i = 0; i < n; i++)
int cube[101][101][101];
struct point{
    int ii,jj,kk;
    point(){}
    point(int ii,int jj,int kk):ii(ii),jj(jj),kk(kk){}
};
void makeCube(int x,int y,int z){
    rep(i,x+1) rep(j,y+1) rep(k,z+1) cube[i][j][k] = 1000000000;
    cube[0][0][0] = 0;
    int val;
    std::queue<point> q;
    q.push(point(0,0,0));
    int i,j,k;
    while(!q.empty()){
        point ijk = q.front(); q.pop();
        i = ijk.ii;
        j = ijk.jj;
        k = ijk.kk;
        if(i+1<=x && cube[i+1][j][k] > cube[i][j][k]+a){
            cube[i+1][j][k] = cube[i][j][k]+a;
            q.push(point(i+1,j,k));
        }
        if(j+1<=y && cube[i][j+1][k] > cube[i][j][k]+a){
            cube[i][j+1][k] = cube[i][j][k]+a;
            q.push(point(i,j+1,k));
        }
        if(k+1<=z && cube[i][j][k+1] > cube[i][j][k]+a){
            cube[i][j][k+1] = cube[i][j][k]+a;
            q.push(point(i,j,k+1));
        }
        if(i+1<=x && j+1<=y && cube[i+1][j+1][k] > cube[i][j][k]+b){
            cube[i+1][j+1][k] = cube[i][j][k]+b;
            q.push(point(i+1,j+1,k));
        }
        if(j+1<=y && k+1<=z && cube[i][j+1][k+1] > cube[i][j][k]+a){
            cube[i][j+1][k+1] = cube[i][j][k]+b;
            q.push(point(i,j+1,k+1));
        }
        if(i+1<=x && k+1<=z && cube[i+1][j][k+1] > cube[i][j][k]+b){
            cube[i+1][j][k+1] = cube[i][j][k]+b;
            q.push(point(i+1,j,k+1));
        }
        if(i+1<=x && j+1 <= y && k+1<=z && cube[i+1][j+1][k+1] > cube[i][j][k]+c){
            cube[i+1][j+1][k+1] = cube[i][j][k]+c;
            q.push(point(i+1,j+1,k+1));
        }
    }
}
void bruteforce(int tt){
    int x,y,z;
    while(tt--){
            cin>>x>>y>>z>>a>>b>>c;
        makeCube(x,y,z);
        cout<<cube[x][y][z]<<"\n";
    }
}
int main(){
    //FASTIO
    int x,y,z;
        int tc; cin>>tc; if(tc <= 50) bruteforce(tc);
        // while(tc--){
        //     cout<<"dfdsf";
        //     //cin>>x>>y>>z>>a>>b>>c;
        //     int res = x*a+y*a+z*a;
        //     res = amin(res,fun1(x,y,z));
        //     res = amin(res,fun1(x,z,y));
        //     res = amin(res,fun1(y,z,x));
        // res = amin(res,fun2(x,y,z));
        // cout<<res<<"\n";
        // }
        //return 0;
}