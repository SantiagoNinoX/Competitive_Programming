#include <iostream>
using namespace std;
int main(){
    int n, groups = 0;
    cout << "Insert the number of magnets: " << endl;
    cin >> n;
    string magnet[n];
    if(n >= 1 && n <= 100000){
        for (int i = 0; i < n; i++){
            cout << "Insert the magnet: " << endl;
            cin >> magnet[i];
        }
        for (int j = 0; j < n; j++){
            if(magnet[j] != magnet [j+1]){
                groups ++;
            }
        }
        cout << "Groups: " << groups << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}