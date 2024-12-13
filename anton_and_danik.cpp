#include <iostream>
using namespace std;
int main(){
    int n, a = 0, d = 0;
    string games;
    cout << "Insert the number of games played: " << endl;
    cin >> n;
    cout << "Insert the results of those games: " << endl;
    cin >> games;
    if(1 <= n && n <= 100000){
        for (int i = 0; i < n; i++){
            if(games[i] == 'A'){
                a++;
            }
            else if(games[i] == 'D'){
                d++;
            }
        }
        if (a > d){
            cout << "Anton" << endl;
        }
        else if (d > a){
            cout << "Danik" << endl;
        }
        else{
            cout << "Friendship" << endl;
        }
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}