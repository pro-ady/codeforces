#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 998244353
#define MAX 200007

ll add(ll x, ll y){
    return (x%MOD+y%MOD)%MOD;
}

ll multiply(ll x, ll y){
    return (x*y)%MOD;
}

ll dp[MAX];

ll nCr(ll n, ll r){
    ll i,j;

    dp[0] = 1;

    for(i=1;i<=n;i++){
        for(j=i;j>0;j--){
            dp[j] += dp[j-1];
            dp[j] = dp[j]%MOD;
        }
    }

    return dp[r]%MOD;
}

ll power(ll x, ll y){
    ll res = 1;

    x = x%MOD;

    while(y > 0){
        if(y & 1){
            res = (res*x)%MOD;
        }

        y = y >> 1;
        x = (x*x) % MOD;
    }

    return res;
}

ll n, m;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cin >> n >> m;

    ll res = multiply(nCr(m,n-100),(n-2));

    res = multiply(res, power(2,n-3));

    cout << res%MOD;
}
