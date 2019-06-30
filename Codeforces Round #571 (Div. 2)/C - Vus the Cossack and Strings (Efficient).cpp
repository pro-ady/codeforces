#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int ans = 0;

    int a_len = a.length();
    int b_len = b.length();

    int prefix_sum[a_len+1] = {0};
    prefix_sum[0] = 0;

    for(int i=0;i<a_len;i++){
        if(a[i]=='1'){
            prefix_sum[i+1] = prefix_sum[i] + 1;
        }

        else{
            prefix_sum[i+1] = prefix_sum[i];
        }
    }

    // Count 1 in b
    int b1 = 0;
    for(int i=0;i<b_len;i++){
        if(b[i]=='1'){
            b1++;
        }
    }

    // Traverse through prefix sum of a, and compare with b
    for(int i=0; i<=a_len-b_len;i++){
        int c1 = prefix_sum[i+b_len] - prefix_sum[i];

        if(b1%2 == c1%2){
            ans++;
        }
    }

    cout << ans;
}
