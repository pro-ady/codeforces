#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll r, x, y;

    cin >> r;
    if(r%2 == 0)
        cout << "NO";

    else
        cout << 1 << " " << (r-3)/2;

    return 0;
}
