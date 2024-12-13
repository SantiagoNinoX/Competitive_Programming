#include <iostream>
using namespace std;
int main(){
    int t, a, b, moves = 0; 
    cout << "Insert the number of tests: " << endl;
    cin >> t;
    if(t >= 1 && t <= 10000){
        for(int i = 0; i < t; i++){
            cout << "Enter a and b: " << endl;
            cin >> a >> b;
            while (a % b != 0){
                a ++;
                moves ++;
            }
            cout << "Moves: " << moves << endl;
            moves = 0;
        }
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}