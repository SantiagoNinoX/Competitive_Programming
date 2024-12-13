#include <iostream>
using namespace std;
int main(){
    int n, x = 0;
    string statement;
    cout << "Give me the number of statements: " << endl;
    cin >> n;
    if(1 <= n && n <= 150){
        while(n--){
            cin >> statement;
            if (statement == "x++" || statement == "++x" ){
                x++;
            }
            if (statement == "x--" || statement == "--x" ){
                x--;
            }
        }
        cout << "Value of X: "<< x << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}