#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll solve(ll init_charge, ll n, ll a, ll b){
    if(init_charge > n*a){
        return n;
    }

    else if(init_charge == n*a){
        return n-1; // Given that a > b
    }

    ll final_charge = init_charge;
    ll apparent_number_of_turns = 0;

    final_charge -= n*a; // Negative

    // Try to make final charge > 0
    // Since Final charge is obtained by "just playing" for n turns
    // We need to find the minimum number of turns that he "plays and charge"
    // i.e. We increase final charge by |b-a| till it becomes positive
    // Since we are trying to maximise time in "just playing"
    ll increment = a - b;

    /*while(final_charge<=0){
        apparent_number_of_turns++;
        final_charge += increment;
    } // TLE On test case
    */

    // Loop shorten to formula
    final_charge*=-1; // Made Positive
    apparent_number_of_turns = (final_charge+increment)/(increment);
    if(n < apparent_number_of_turns){
        return -1;
    }

    else return (n - apparent_number_of_turns);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        ll init_charge, n, a, b;
        cin>>init_charge>>n>>a>>b;
        cout << solve(init_charge, n, a, b) << endl;
    }
}
