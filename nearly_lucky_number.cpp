#include <iostream>
using namespace std;
int main(){
    int lucky = 0;
    string n;
    //int n;
    cout << "Insert the number: " << endl;
    cin >> n;
    if(1 <= n.length() && n.length() <= 1000000000000000000){
        for (int i = 0; i < n.length(); i++){
            if ((n[i] == '4') || (n[i] == '7') ){
                lucky ++;
            }
        }
        //while (n != 0) {
            //if ((n % 10) == 4 || (n % 10) == 7) {
                //lucky++;
            //}

            //n /= 10;
        //}
        
        if ((lucky == 4) || (lucky == 7)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}