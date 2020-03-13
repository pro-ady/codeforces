#include<bits/stdc++.h>

using namespace std;

typedef long long		ll;
typedef pair<int,int>	ii;
typedef vector<ii>		vii;
typedef vector<int>		vi;
typedef vector<string> 	vs;
typedef vector<ll> 		vl;

#define INF 1000000000
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define rep(i,lower,upper) for(int i=lower; i<upper;i++)
#define rep_dec(i,upper, lower) for(int i=upper; i>=lower;i--)

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main(){
    fast();

    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        if(n%m==0 || m%n==0){
            cout << "YES\n";
        }

        else{
            cout << "NO\n";
        }
    }

    return 0;
}
