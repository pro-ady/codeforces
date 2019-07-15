#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;

    ll p[100007] = {};

    for(int i=1;i<=m;i++){
        cin >> p[i];
    }

    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }

    int curr_p = 1;
    int moves = 0;
    vector<int> index_to_remove;
    while(curr_p <= m){
        if(k<v.size() && p[curr_p] >= v[k]){
            v.erase(v.begin(), v.begin()+k);
        }

        int i;
        for(i=0;i<k;i++){
            if(v[i] == p[curr_p]){
                // cout << i << " : " << v[i] << endl;
                index_to_remove.push_back(i);
                curr_p++;
            }
        }
        for(auto i:index_to_remove){
            v.erase(v.begin() + i);
        }
        index_to_remove.clear();

        moves++;
    }

    cout << moves;
}
