#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin>>x;

    int a = x%4;

    if(a==2){
        cout << "1 B";
    }

    if(a==3){
        cout << "2 A";
    }

    if(a==0){
        cout << "1 A";
    }

    if(a==1)
        cout << "0 A";
}
