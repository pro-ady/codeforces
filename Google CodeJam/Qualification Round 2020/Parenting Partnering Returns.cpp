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
		vector<pair<pii, int>> activity;
		string ans = "";
		int n,i;
		cin >> n;

		rep(i,n){
			int x,y;
			cin >> x >> y;
			activity.pb(mp(mp(x,y), i));
		}

		sort(activity.begin(), activity.end());

		// for(auto e:activity){
		// 	cout << e.second << ": " << e.first.first << " " << e.first.second << "\n";
		// }

		pii C,J;

		C = mp(-1,-1);
		J = mp(-1,-1);
		bool flag = true;

		for(auto m:activity){
			pii e = mp(m.first.first, m.first.second);
			if(C.first == -1 && C.second == -1){
				C = e;
				ans.pb('C');
			}

			else if(J.first == -1 && J.second == -1){
				J = e;
				ans.pb('J');
			}

			else{
				int start_time = e.first;
				int end_time = e.second;

				if(C.second <= start_time){
					C = e;
					ans.pb('C');
				}

				else if(J.second <= start_time){
					J = e;
					ans.pb('J');
				}

				else{
					flag = false;
					break;
				}
			}
		}

		if(flag == false){
			cout << "Case #" << k << ": IMPOSSIBLE" << "\n";
		}

		else{
			char s[1007];
			rep(i, ans.length()){
				int index = activity[i].second;
				s[index] = ans[i];
			}

			s[ans.length()] = '\0';

			cout << "Case #" << k << ": " << s << "\n";
		}
	}
	
	return 0;
}