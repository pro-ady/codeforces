#include<bits/stdc++.h>

using namespace std;

int n,t;

int main(){
    cin >> t;
    while(t--){
        vector<int> v;
        cin >> n;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        for(int i=n-1;i>=0;i--){
            cout << v[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}
