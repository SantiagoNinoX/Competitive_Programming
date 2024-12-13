#include <iostream>
using namespace std;
int main(){
    int n; 
    cout << "Insert the number of feeling: " << endl;
    cin >> n;
    if(n >= 1 && n <= 100){
        for(int i = 1; i <= n; i++){
            if (i % 2 != 0 && i == n) {
                cout << "I hate it ";
            }
            else if (i % 2 == 0 && i == n){
                cout << "I love it ";
            }
            else if (i % 2 != 0 && i < n){
                cout << "I hate that ";
            } 
            else if (i % 2 == 0 && i < n){
                cout << "I love that ";
            } 
        }
        cout << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}