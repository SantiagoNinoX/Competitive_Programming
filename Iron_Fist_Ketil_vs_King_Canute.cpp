#include <iostream>
using namespace std;
int main(){
    int n, m, k;
    cout << "Insert the numbers of Soldiers: " << endl;
    cin >> n >> m >> k;
    if(n >= 1){
        if(k <= 1000000){
            if ((n / k) >= m){
                cout << "Iron fist Ketil" << endl;
            }
            else{
                cout << "King Canute" << endl;
            }
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