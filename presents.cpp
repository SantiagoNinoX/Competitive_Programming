#include <iostream>
using namespace std;
int main(){
    int n;
    int k;
    cout << "Insert the number of people: " << endl;
    cin >> n;
    int p[n];
    if(n >= 1 && n <= 100){
        for (int i = 1; i <= n; i++){
            cout << "Insert the person: " << endl;
            cin >> k;
            p[k-1] = i;
        }
        for (int j = 0; j < n; j++){
            cout << p[j] << " "; 
        }
        cout << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}