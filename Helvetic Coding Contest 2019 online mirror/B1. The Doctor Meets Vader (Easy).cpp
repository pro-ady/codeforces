#include<bits/stdc++.h>

using namespace std;

#define pii pair<long long, long long>
#define ll long long int

// Comparator used to sort vector on the basis of first value
bool comp (pair <int,int> a, pair <int,int> b){
    if (a.first>=b.first)
        return false;
    else
        return true;
}

int main(){
    ll s,b;
    cin >> s >> b;

    vector<pii> attack;
    vector<pii> defend;

    for(int i=0;i<s;i++){
        ll attack_power;
        cin>>attack_power;
        attack.push_back(make_pair(attack_power, i));
    }

    for(int i=0;i<b;i++){
        ll defence, gold;
        cin >> defence >> gold;
        defend.push_back(make_pair(defence, gold));
    }

    sort(attack.begin(), attack.end(), comp);
    sort(defend.begin(), defend.end(), comp);

    vector<ll> prefix_sum;

    vector<ll> ans(s+7);

    prefix_sum.push_back(defend[0].second);

    for(int i=1;i<b;i++)
        prefix_sum.push_back(defend[i].second + prefix_sum[i-1]);

    ll index = 0;

    // Traversing through each spaceship
    for(int i=0;i<s;i++){
        while(index < b && attack[i].first >= defend[index].first){
            // Spaceship attacks all indexes before that
            index++;
        }

        // If attacking power is less than first base
        if(index==0){
            ans[attack[i].second] = 0;
        }

        else{
            ans[attack[i].second] = prefix_sum[index-1];
        }
    }

    for(ll i=0;i<s;i++)
        cout << ans[i] << " ";
}
