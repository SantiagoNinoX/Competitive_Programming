#include <iostream>
using namespace std;
int main(){
    int k, n, w, count = 0, borrow=0;
    cout << "Give me the price (k), money (n) and bananas (w): " << endl;
    cin >> k >> n >> w;
    if(1 <= k){
        if(w <= 1000){
            if(0 <= n && n <= 1000000000){
                for(int i = 1; i <= w; i++){
                    count+=(i*k);
                }
                cout << "Money: " << count << endl;
                borrow = count - n;
                cout << "Borrow: " << borrow << endl;
            }
            else{
                cout << "INCORRECT N" << endl;
            }        
        }
        else{
            cout << "INCORRECT W" << endl;
        }
    }
    else{
        cout << "INCORRECT K" << endl;
    }
    return 0;
}