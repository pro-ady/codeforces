#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> point;

    int x_max = INT_MIN, x_min = INT_MAX, y_max  = INT_MIN, y_min  =INT_MAX;

    map<int, int> cnt;

    int cnt_x[50] = {0};
    int cnt_y[50] = {0};

    for(int i=0;i<4*n+1;i++){
        int x,y;
        cin >> x >> y;
        point.push_back(make_pair(x,y));
    }

    for(int i=0;i<4*n+1;i++){
        int x = point[i].first;
        int y = point[i].second;

        cnt_x[x]++;
        cnt_y[y]++;

        //cout << "cnt_x: " << cnt_x[x] << "  cnt_y: " << cnt_y[y] << endl;

        if(cnt_x[x] >=2){
            if(x > x_max){
                x_max = x;
            }
            if(x < x_min){
                x_min = x;
            }
        }

        if(cnt_y[y] >= 2){
            if(y > y_max){
                y_max = y;
            }
            if(y < y_min){
                y_min = y;
            }
        }

        //cout << "x_min: " << x_min << "  y_min: " << y_min << endl;
        //cout << "x_max: " << x_max << "  y_max: " << y_max << endl;
    }

    // We have determined the sides of the square, above
    // Now we have to identify the odd one out
    bool flag = true;
    int ans_x,ans_y;
    for(int i=0;i<4*n+1;i++){
        int x = point[i].first;
        int y = point[i].second;

        if((x == x_min || x == x_max) && (y_min <= y && y <= y_max))
            continue;
        else if((y == y_min || y == y_max) && (x_min <= x && x <= x_max))
            continue;

        else{
            ans_x = x;
            ans_y = y;
            flag = false;
            break;
        }
    }

    cout << ans_x << " " << ans_y;
}
