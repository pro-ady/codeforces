#include<bits/stdc++.h>

using namespace std;

#define upper_limit 200007

typedef long long int ll;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n, temp; // a[...] is number of each type
        cin>>n;

        // THOUGHT NUMBER OF EACH TYPE WAS GIVEN, initially
        /*for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n, greater<int>());

        ll number_of_candles = a[0];
        temp = a[0];

        for(ll i=1;i<n;i++){
            if(a[i]>=temp){
                temp = temp - 1;
                number_of_candles += temp;
            }

            else{
                temp = a[i];
                number_of_candles += temp;
            }
        }

        cout << number_of_candles << endl; */


        // CORRECTED
        ll a[n+1] = {0};
        for(ll i=0; i<n;i++){
            cin >> temp;
            a[temp]++;
        }

        sort(a,a+n+1,greater<int>()); // Since n elements and 0 present... take care

        ll no_of_cndl = a[0];
        temp = a[0];        // Used to keep track as to how much candle was taken at ith position

        for(ll i=1; i<=n && temp!=0;i++){
            if(a[i] >= temp){
                temp -= 1;
                no_of_cndl += temp;
            }

            else{
                temp = a[i];
                no_of_cndl += temp;
            }
        }

        cout << no_of_cndl << endl;
    }
}
