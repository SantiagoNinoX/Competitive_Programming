#include <iostream>
using namespace std;
int main(){
    int n, h, a, cont = 0;
    cout << "Give me the number of friends and the height of the fence: " << endl;
    cin >> n >> h;
    if(1 <= n && n <= 1000){
        if(1 <= h && h <= 1000){
            for (int i = 0; i < n; i++){
                cout << "Give me the heights of each person: " << endl;
                cin >> a;
                if(a >= 1 && a <= 2*h){
                    if(a > h){
                        cont += 2;
                    }
                    else{
                        cont ++;
                    }
                }
                else{
                    cout << "Incorrect heights" << endl;
                }
            }
            cout << "Minimim width of the road: " << cont << endl;
        }
        else{
            cout << "NO H" << endl;
        }
    }
    else{
        cout << "INCORRECT N" << endl;
    }
    return 0;
}