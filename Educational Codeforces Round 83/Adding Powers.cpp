#include<bits/stdc++.h>

using namespace std;

#define vll vector<long long>
#define ll long long

/*
bool check2_base_k(ll num, ll k){
    cout << "num and k: " << num << " " << k << "\n";

    if(num == 0 || num == 1){
        cout << "TRUE\n";
        return true;
    }

    if(num % k >= 2){
        cout << "FALSE\n";
        return false;
    }

    return check2_base_k(num/k, k);
}
*/


int t, n, k;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cin >> t;
    while(t--){
        bool flag = true;
        vll v;
        cin >> n >> k;

        for(int i=0;i<n;i++){
            ll tmp;
            cin >> tmp;

            v.push_back(tmp);
        }

        int lim = 16.0*log(10)/log(k);
        lim++;

        for(int i=0;i<=lim;i++){
            int rem_sum = 0;

            for(int j=0;j<n;j++){
                rem_sum += v[j]%k;
                v[j] /= k;
            }

            if(rem_sum >= 2){
                flag = false;
                cout << "NO\n";
                break;
            }
        }

        if(flag){
            cout << "YES\n";
        }
    }
}
