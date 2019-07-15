#include<bits/stdc++.h>

using namespace std;

int main(){
    // Create a 2D array
    // Rows = {m,p,s} and Columns = Card Number
    // Array keeps the counts of a card if it appears in input
    int arr[3][9] = {};

    for(int i=0;i<3;i++){
        string temp;
        cin >> temp;

        int index_no = temp[0] - '0' - 1;
        char suit = temp[1];

        //cout << index_no << " " << char(suit) << endl;

        if(suit=='m'){
            arr[0][index_no]++;
        }

        else if(suit=='p'){
            arr[1][index_no]++;
        }

        else{
            arr[2][index_no]++;
        }
    }

    int min_moves = 2;

    for(int i=0;i<3;i++){
        //cout << endl;
        for(int j=0;j<9;j++){
            //cout << arr[i][j] << " ";
            // Check if 3 identical cards (koutsu) is formed
            min_moves = min(min_moves, 3 - arr[i][j]);

            if(j+2 < 9){
                // Check if 3 continuous cards of same suit are present (shuntsu)
                min_moves = min(min_moves, 3 - (!!arr[i][j] + !!arr[i][j+1] + !!arr[i][j+2]));
            }
        }
    }

    cout << min_moves;
}
