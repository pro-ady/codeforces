#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
#define repd(i,n) for(i=n;i>=0;i--)
#define REP(i,k,n) for(i=k;i<=n;i++)
#define REPD(i,k,n) for(i=k;i>=n;i--)

void fast(){
	ios::sync_with_stdio(false);
    cin.tie(0);
}

int main(){
	fast();

	int t;
	cin >> t;

	for(int k=1;k<=t;k++){
		
		string s;
		cin >> s;
		
		string s_ans = "";

		int i;

		rep(i, s.length()){
			if(i==0){
				int num = s[i] - '0';
				//cout << "num = " << num << endl;
				int j;
				rep(j,num){
					s_ans.pb('(');
				}
				s_ans.pb(s[i]);
				rep(j,num){
					s_ans.pb(')');
				}
			}

			else{
				int prev = s[i-1] - '0';
				int curr = s[i] - '0';

				if(prev == curr){
				    // Join the current with previous element
					int j;
					while(s_ans[s_ans.length()-1] == ')'){
						s_ans.pop_back();
					}
					s_ans.pb(s[i]);
					rep(j,prev){
						s_ans.pb(')');
					}
				}

				else if(prev > curr){
				    // Remove as much closing brackets
				    // as the current element and fit accordingly
					int j;
					rep(j, curr){
						s_ans.pop_back();
					}
					s_ans.pb(s[i]);
					rep(j,curr){
						s_ans.pb(')');
					}
				}

				else if(curr > prev){
				    // Give extra brackets to current element
					int diff = curr - prev;				
					while(s_ans[s_ans.length()-1] == ')'){
						s_ans.pop_back();
					}
					int j;
					rep(j, diff){
						s_ans.pb('(');
					}
					s_ans.pb(s[i]);
					rep(j, curr){
						s_ans.pb(')');
					}
				}
			}
		}

		cout << "Case #" << k << ": " << s_ans << "\n";
	}
	
	return 0;
}