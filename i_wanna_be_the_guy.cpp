#include <iostream>
#include <set>
using namespace std;
int main(){
    int n, p, q, cont = 0; 
    cout << "Insert the number of levels: " << endl;
    cin >> n;
    if(n >= 1 && n <= 100){
        cout << "Enter the levels of X: " << endl;
        cin >> p;
        int arrayX[p];
        for(int i = 0; i < p; i++){
            cout << "Enter the level: " << endl;
            cin >> arrayX[i];
        }
        cout << "Enter the levels of Y: " << endl;
        cin >> q;
        int arrayY[q];
        for (int j = 0; j < q; j++){
            cout << "Enter the level: " << endl;
            cin >> arrayY[j];
        }
        set<int> arreglo;
        for (int k = 0; k < p; k++){
            arreglo.insert(arrayX[k]);
        }
        for (int x = 0; x < q; x++){
            arreglo.insert(arrayY[x]);
        }
        if (arreglo.size() == n){
            cout << "I become the guy." << endl;
        }
        else{
            cout << "Oh, my keyboard!" << endl;
        }
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}