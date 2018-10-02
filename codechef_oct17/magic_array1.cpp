#include <bits/stdc++.h>
#include <random>
using namespace std;
#define lli long long int
lli current[1000002];
lli abss(lli x)
{
    if(x > 0)
        return x;
    return -x;
}
 
lli getrand()
{
    return rand()%1000000;
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin >> t;
    //t = 1;
    while(t--)
    {
        lli n,answer=-1;
        cin >> n;
        //n = 100000;
        vector <lli> v[n];
        for(lli i = 0; i < n ; i++)
        {
            lli x;
            cin >> x;
            //x = getrand()%10 + 1;
            for(lli j = 0; j < x; j++)
            {
                lli p;cin >> p;
                //p = getrand();
                v[i].push_back(p);
            }
        }
 
        
        lli minm = v[0][0], maxm = minm;
        for(lli i = 0; i < v[0].size() ; i++)
        {
            if(v[0][i] > maxm)
                maxm = v[0][i];
            else if(v[0][i] < minm)
                minm = v[0][i];
        }
        if(n == 1)
        {
            cout << "0\n";
            continue;
        }
        for(lli i = 0; i < v[1].size(); i++)
        {
            current[i] = abss(v[1][i] - minm);
            if(abss(v[1][i] - maxm) > current[i])
                current[i] = abss(v[1][i] - maxm);
            if(answer == -1 || answher < current[i])
                answer = current[i];
        }
        for(lli cur = 2; cur < n; cur++)
        {
            lli max1 = -1, max2 = -1;
            for(lli i = 0; i < v[cur-1].size(); i++)
            {
                lli temp1 = v[cur-1][i] * (cur) + current[(i + 1) % v[cur-1].size()]; 
                lli temp2 = - v[cur-1][i] * (cur) + current[(i +1) % v[cur-1].size()]; 
                if(max1 == -1 || max1 < temp1)
                {
                    max1 = temp1;
                }
                if(max2 == -1 || max2 < temp2)
                {
                    max2 = temp2;
                }
            }
            //cout << max1 << " " <<max2<<endl;
            for(lli i = 0; i < v[cur].size(); i++)
            {
                //cout << "entered";	
                current[i] = max1 - (v[cur][i] * (cur));
                if(max2 + (v[cur][i] * (cur )) > current[i])
                    current[i] = max2 + (v[cur][i] * (cur) );
            }
 
            if(cur == n -1)
            {
                for(lli i  = 0; i < v[n-1].size(); i++)
                {
                    if(current[i] > answer)
                        answer = current[i];
                }
            }
        }
        cout << answer << "\n";
 
    }
 
    return 0;
} .