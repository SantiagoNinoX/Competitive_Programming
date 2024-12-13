#include <iostream>
using namespace std;
int main(){
    int w;
    cout << "Give me the weight of the watermelon: " << endl;
    cin >> w;
    if(1 <= w && w <= 100){
        if(w % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO W" << endl;
    }
    return 0;
}