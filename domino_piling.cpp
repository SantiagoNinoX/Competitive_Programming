#include <iostream>
using namespace std;
int main(){
    int m, n, pieces = 0;
    cout << "Insert the dimensions of the domino board: " << endl;
    cin >> m >> n;
    if(1 <= m && m <= n){
        if(m <= n && n <= 16){
            pieces = (m*n)/2;
            cout << "Number of pieces: " << pieces << endl;
        }
        else{
        cout << "NO N" << endl;
        }
    }
    else{
        cout << "NO M" << endl;
    }
    return 0;
}