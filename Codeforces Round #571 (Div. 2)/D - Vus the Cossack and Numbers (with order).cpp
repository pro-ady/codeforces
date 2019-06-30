#include<bits/stdc++.h>

using namespace std;

void display(vector<pair<double,bool>> a){
    for(auto i:a){
        cout << i.first << " ";
    }
}

int main(){
    long long int n, sum=0;
    cin>>n;

    double x;
    bool test_int;
    vector<pair<double,bool>> a;   // 1st stores number, second stores true if first is integer originally and not a decimal

    for(long long int i=0;i<n;i++){
        cin>>x;

        if(x == floor(x)){
            test_int = true;
        }

        else{
            test_int = false;
        }
        cout << x << endl;
        x = floor(x);
        sum += int(x);
        a.push_back(make_pair(x, test_int));
    }

    if(sum==0){
        display(a);
    }

    else{
        long long int i=0;

        while(i < n && sum != 0){
            if(a[i].second){
                continue;
            }

            a[i].first += 1;
            sum += 1;
            cout<<a[i].first << "  " << i << endl;
            i++;
        }

        display(a);
    }
}
