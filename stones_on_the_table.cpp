#include <iostream>
using namespace std;
int main(){
    string stones;
    int n, moves = 0;
    cout << "Give me the number of stones: " << endl;
    cin >> n;
    cout << "Give me the colour of those stones: " << endl;
    cin >> stones;
    if(1 < n && n < 50){
        if(1 < stones.length() && stones.length() <= n){
            for(int i = 0; i < stones.length(); i++){
                if(stones[i] == stones[i+1]){
                    moves ++;
                }
            }
            cout << "Minimum number of moves: " << moves << endl;
        }
        else{
            cout << "INCORRECT SIZE" << endl;
        }
    }
    else{
        cout << "INCORRECT N" << endl;
    }
    return 0;
}