#include <iostream>
using namespace std;
int main(){
    int n, p, v, t, decision=0;
    string amigas;
    cout << "Give me the number of problems: " << endl;
    cin >> n;
    if(1 <= n && n <= 100){
        while(n--){
            int pueden = 0;
            //cin >> amigas;      2
            //for (int i = 0; i < amigas.length(); i++){
                //if (amigas[i] == '1'){
                    //pueden++;
                //}
            //}
            cin >> p >> v >> t;
            if (p == 1){
                pueden++;
            }
            if (v == 1){
                pueden++;
            }
            if (t == 1){
                pueden++;
            }
            //cin >> p >> v >> t;    1
            if (pueden>=2){
                decision++;
            }
        }
        cout << "Problems which can be solved: " << decision << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}