#include <iostream>
using namespace std;
int main(){
    string sum;
    int one = 0, two = 0, three = 0;
    cout << "Give me the sum: " << endl;
    cin >> sum;
    if(0 < sum.length() && sum.length() < 100){
        for (int i = 0; i < sum.length(); i++){
            if (sum[i] == '+'){
                continue;
            }
            else if (sum[i] == '1'){
                one++;
            }
            else if (sum[i] == '2'){
                two++;
            }
            else if (sum[i] == '3'){
                three++;
            }
            else{
                cout << "Only 1, 2 or 3." << endl;
                return 0;
            }
        }
        for(int o = 1; o <= one; o++){
            cout << "1";
            if ((two != 0 || three != 0)||(one - o != 0)){
                cout << "+";
            }
        }
        for(int t = 1; t <= two; t++){
            cout << "2";
            if (three != 0 || two - t != 0){
                cout << "+";
            }
        }
        for(int j = 1; j <= three; j++){
            cout << "3";
            if(three - j != 0){
                cout << "+";
            }
        }
    }
    else{
        cout << "INCORRECT SIZE" << endl;
    }
    return 0;
}