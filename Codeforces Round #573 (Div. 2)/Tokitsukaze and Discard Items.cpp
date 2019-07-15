#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n,m,k;
    cin >> n >> m >> k;

    vector<ll> v;
    v.push_back(-1);

    for(int i=0;i<m;i++){
        ll tmp;
        cin>>tmp;

        v.push_back(tmp);
    }

    int ans=0, sum=0, curr_ind=1;

    while(curr_ind <= m){
        // Finding the upper limit of a page
        ll upp_lim = ((v[curr_ind]-sum-1)/k + 1)*k + sum;

        while(curr_ind <= m && v[curr_ind] <= upp_lim){
            sum++;
            curr_ind++;
        }
        ans++;
    }

    cout << ans;
}
