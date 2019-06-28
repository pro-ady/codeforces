#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,ans=0, roots_visited=1;
    cin >> n >> k;

    queue<string> subs;
    map<string, bool> visited;

    string root;
    cin >> root;

    subs.push(root);
    visited[root] = true;

    while(!subs.empty() && visited.size() < k){
        string v = subs.front();
        int curr_len = v.size();

        for(int i=0;i<curr_len;i++){
            string temp = v;
            temp.erase(i,1);
            if(visited[temp] || visited.size() > k){
                continue;
            }
            subs.push(temp);
            visited[temp] = true;
            ans += n - temp.size();
            //roots_visited++;
            //v = temp;
        }

        subs.pop();
    }

    if(visited.size() < k){
        cout << -1;
    }

    else
        cout << ans;
}
