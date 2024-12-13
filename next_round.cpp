#include <iostream>
using namespace std;
int main(){
    int n, k;
    cout << "Insert the number of participants and the k-th place finisher's score: " << endl;
    cin >> n >> k;
    if(k <= n && n <= 50){
        if(1 <= k && k <= n){
            int cont = 0;
            int scores[n];
            for (int i = 0; i < n; i++){
                cout << "Enter the " << i << "-th score: " << endl;
                cin >> scores[i];
            }
            for (int j = 0; j < n; j++){
                if(scores[j] >= scores[k]){
                    if(scores[j]>0){
                        cont++;
                    }
                }
            }
        cout << "Contestant to the next round: " << cont << endl;
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