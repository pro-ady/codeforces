    #include<bits/stdc++.h>
     
    using namespace std;
    #define ll long long
     
    int t;
    int main(){
        cin >> t;
        while(t--){
            int n;
            cin >> n;
     
            unordered_set<ll> s;
     
            int result = 0;
     
            for(int i=0;i<n;i++){
                ll temp;
                cin >> temp;
                if(s.find(temp) == s.end()){
                    s.insert(temp);
                    result++;
                }
            }
     
            cout << result << "\n";
        }
    }