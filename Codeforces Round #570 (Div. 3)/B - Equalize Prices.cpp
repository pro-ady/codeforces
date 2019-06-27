#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n,k, temp;
        cin>>n>>k;

        ll mini, maxi;

        n--;
        cin>>mini;
        maxi = mini;

        while(n--){
            cin>>temp;
            if(temp < mini){
                mini = temp;
            }

            else if(temp>maxi){
                maxi = temp;
            }
        }

        ll ans = mini + k;
        temp = maxi - k;

        if(ans >= temp){
            cout << ans << endl;
        }

        else{
            cout << -1 << endl;
        }
    }
}
