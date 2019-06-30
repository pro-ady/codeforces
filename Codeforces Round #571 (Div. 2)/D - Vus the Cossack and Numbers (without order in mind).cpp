#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    float temp;

    vector<float> positive;
    vector<float> negative;
    vector<int> integers;

    int reqd_sum = 0;

    while(n--){
        cin>>temp;

        if(temp==floor(temp)){
            integers.push_back(temp);
            reqd_sum -= temp;
        }

        else if(temp>0){
            positive.push_back(temp);
        }

        else if(temp < 0){
            negative.push_back(temp);
        }
    }

    sort(positive.begin(), positive.end());
    sort(negative.begin(), negative.end());

    int max_positive=0, max_negative=0;

    for(int i=0;i<positive.size();i++){
        max_positive += ceil(positive[i]);
    }

    for(int i=0;i<negative.size();i++){
        max_negative += floor(negative[i]);
    }

    max_negative *= -1;

    if(max_positive - max_negative < reqd_sum){
            int sum = max_positive - max_negative;
            int i =0;

            while(i<negative.size() && sum != reqd_sum){
                negative[i] = ceil(negative[i]);
                sum += 1;
            }

            while(i<negative.size()){
                negative[i] = floor(negative[i]);
                i++;
            }
            int j=0;
            while(j<positive.size()){
                positive[j] = ceil(positive[j]);
                j++;
            }
    }

    else if(max_positive - max_negative > reqd_sum){
            int sum = max_positive - max_negative;
            int i=0;

            while(i<positive.size() && sum != reqd_sum){
                positive[i] = floor(positive[i]);
                sum -= 1;
            }

            while(i<positive.size()){
                positive[i] = ceil(positive[i]);
                i++;
            }
            int j=0;
            while(j<negative.size()){
                negative[i] = floor(negative[i]);
                j++;
            }
    }

    else{
        int i=0,j=0;

        while(i<positive.size()){
            positive[i] = ceil(positive[i]);
            i++;
        }
        while(j<negative.size()){
            negative[j] = floor(negative[j]);
            j++;
        }
    }

    for(int i=0;i<positive.size();i++){
        cout << positive[i] << " ";
    }

    for(int j=0;j<negative.size();j++){
        cout << negative[j] << " ";
    }

    for(int i=0;i<integers.size();i++){
        cout << integers[i] << " ";
    }

    return 0;
}

