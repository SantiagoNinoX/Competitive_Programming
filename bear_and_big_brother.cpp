#include <iostream>
using namespace std;
int main(){
    int a, b, year = 0;
    cout << "Insert the weights of Limak and Bob: " << endl;
    cin >> a >> b;
    if(1 <= a && a <= b){
        if(a <= b && b <= 10){
            while(a <= b){
                a*=3;
                b*=2;
                year++;
            }
            cout << "Year: " << year << endl;
        }
        else{
        cout << "NO B" << endl;
        }
    }
    else{
        cout << "NO A" << endl;
    }
    return 0;
}