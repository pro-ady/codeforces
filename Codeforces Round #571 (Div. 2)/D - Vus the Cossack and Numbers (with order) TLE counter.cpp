#include<bits/stdc++.h>

using namespace std;

void display(int a[], int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}

int main(){
    int n;
    cin>>n;

    double a[n+7];
    int ans[n+7], sum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        ans[i] = ceil(a[i]);
        sum += ans[i];
    }

    int it = 0;

    while(sum != 0){
        if(floor(a[it]) != ceil(a[it])){
            ans[it] = floor(a[it]);
            sum--;
        }
        it++;
    }

    display(ans,n);
}
