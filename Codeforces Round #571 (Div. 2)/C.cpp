#include<bits/stdc++.h>

using namespace std;

/*int solve(int A, int B)
{
    int count = 0;

    // since, the numbers are less than 2^31
    // run the loop from '0' to '31' only
    for (int i = 0; i < 32; i++) {

        // right shift both the numbers by 'i' and
        // check if the bit at the 0th position is different
        if (((A >> i) & 1) != ((B >> i) & 1)) {
            count++;
        }
    }

    // cout << "Number of different bits : " << count << endl;
    return count;
}*/
/*
bool solve(string a, string b, int start, int end){
    int j = 0,count=0;
    for(int i=start;i<=end;i++,j++){
        //cout << a[i] << "  " << b[j] << endl;
        if(a[i]!=b[j]){
            //cout << count << endl;
            count++;
            //j++;
        }
    }
    // cout << (end-start+1) << "   " << b.size() << endl;
   // cout << count << endl;
    return (count%2==0) ? true : false;
}*/

bool solve2(string a, string b, int start, int end){
    string sub_a = a.substr(start, end-start+1);

    bitset<64> bit_a(sub_a);
    bitset<64> bit_b(b);

    int ans = (bit_a^bit_b).count();

    if(ans%2==0)
        return true;
    else
        return false;
}

int main(){
    string a,b;

    cin>>a>>b;

    int len_a = a.size();
    int len_b = b.size();
    int count = 0;

    for(int i=0;i<(len_a-len_b+1);i++){
        if(solve2(a,b,i,i+len_b-1)){
            //cout << i << "   " << i+len_b-1 << endl;
            count++;
        }
    }
    cout << count;
}

