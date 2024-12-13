#include <iostream>
using namespace std;
int main(){
    int n, p; 
    double o = 0, total;
    cout << "Insert the number of drinks: " << endl;
    cin >> n;
    if(n >= 1 && n <= 100){
        for (int i = 0; i < n; i++){
            cout << "Give me the percentage of orange juice: " << endl;
            cin >> p;
            o += p;
        }
        total = o / n;
        cout << "Answer: " << total << "%" << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}