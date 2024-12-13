#include <iostream>
using namespace std;
int main(){
    int n, k;
    cout << "Insert the number to substract and the number of substractions: " << endl;
    cin >> n >> k;
    if(n >= 2 && n <= 1000000000){
        if(k >= 1 && k <= 50){
            for (int i = 0; i < k; i++){
                if (n % 10 == 0){
                    n /= 10;
                }
                else{
                    n--;
                }
            }
            cout << n << endl;
        }
        else{
        cout << "NO K" << endl;
        }
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}