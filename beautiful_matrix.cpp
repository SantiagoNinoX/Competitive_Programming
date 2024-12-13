#include <iostream>
using namespace std;
int main(){
    int x, moves;
    cout << "Insert the elements of the matrix: " << endl;
    for (int i=1; i <= 5; i++){
        for (int j=1; j <= 5; j++){
            cout << "Ingresa el elemento " << i << " * " << j << endl;
            cin >> x;
            if (x == 1){
                if (i == 3){
                    moves = abs(j-3);
                }
                if (j == 3){
                    moves = abs(i-3);
                }
                else{
                    moves = abs((i-3)) + abs((j-3));
                }
            }
        }
    }
    cout << "Amount of moves: " << moves << endl;
    return 0;
}