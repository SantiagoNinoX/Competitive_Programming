#include <iostream>
using namespace std;
int main(){
    int n, op, count = 0;
    bool st = false;
    cout << "Insert the number of people: " << endl;
    cin >> n;
    if(n >= 1 && n <= 100){
        for (int i = 0; i < n; i++){
            cout << "Insert opinion: " << endl;
            cin >> op;
            if (op == 1){
                //count ++;
                st = true;
            }
        }
        //if (count == 0){
            //cout << "EASY" << endl;
        //}
        //else{
            //cout << "HARD" << endl;
        //}
        if (st){
            cout << "HARD" << endl;
        }
        else{
            cout << "EASY" << endl;
        }

    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}