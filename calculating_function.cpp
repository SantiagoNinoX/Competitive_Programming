#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n, result = 0;
    cout << "Insert the number: " << endl;
    cin >> n;
    if(n >= 1 && n <= 1000000000000000){
        for (int i = 1; i <= n; i++){
            result += pow(-1, i) * i;
        }
        //if (n % 2 == 0) {
            //result = n / 2;
        //}
        //else {
            //result = ((n + 1) / 2) * (-1);
        //}
        cout << "Result: " << result << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}