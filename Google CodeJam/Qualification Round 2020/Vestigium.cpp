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
		int n,i,j;

		int repeated_row = 0;
		int repeated_col = 0;
		bool flag = true;
		cin >> n;

		int a[107][107];

		rep(i,n){
			rep(j,n){
				cin >> a[i][j];
			}
		}

		rep(i,n){
			unordered_map<int, bool> row;
			rep(j,n){
				if(row.find(a[i][j]) == row.end()){
					row[a[i][j]] = true;
				}

				else{
					repeated_row++;
					break;
				}
			}
		}

		rep(i,n){
			unordered_map<int, bool> col;
			rep(j,n){
				if(col.find(a[j][i]) == col.end()){
					col[a[j][i]] = true;
				}
				else{
					repeated_col++;
					break;
				}
			}
		}
		int trace = 0;
		rep(i,n){
			trace += a[i][i];
		}
		
		cout << "Case #" << k << ": " << trace << " " << repeated_row << " " << repeated_col << "\n"; 
	}
	
	return 0;
}