#include<bits/stdc++.h>

using namespace std;

int main(){
    int no_of_uni, pos_doctor, max_uni, query;

    cin >> no_of_uni >> pos_doctor >> max_uni >> query;

    while(query--){
        int option, attr;
        cin>>option>>attr;

        if(option==0){
            int link = attr;

            if(link < pos_doctor){
                no_of_uni -= link;
                pos_doctor -= link;
            }

            else if(link >= pos_doctor){
                no_of_uni = link;
                //pos remains same
            }
        }

        if(option==1){
            int new_link = attr;

            if(new_link>pos_doctor){
                no_of_uni++;
                // pos remains same
            }

            else{
                no_of_uni++;
                pos_doctor++;
            }
        }

        cout << no_of_uni << " " << pos_doctor << endl;
    }
}
