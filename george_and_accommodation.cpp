#include <iostream>
using namespace std;
int main(){
    int n, p, q, caben, count = 0;
    cout << "Insert the number of people: " << endl;
    cin >> n;
    if(n >= 1 && n <= 100){
        for (int i = 0; i < n; i++){
            cout << "Insert the number of habitants and capacity: " << endl;
            cin >> p >> q;
            if (p >= 0 && p <= q){
                if (q >= p && q <= 100){
                    caben = q - p;
                    if (caben >= 2){
                        count ++;
                    }
                }
                else{
                    cout << "NO Q" << endl;
                }
            }
            else{
                cout << "NO P" << endl;
            }
        }
        cout << "Available rooms: " << count << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}