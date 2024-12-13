#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, a, b, inside = 0, min = 0;
    cout << "Give me the number of stops: " << endl;
    cin >> n;
    if(2 <= n && n <= 1000){
        for (int i = 0; i < n; i++){
            cout << "Give me the number of passengers to exit (a) and to enter (b): " << endl;
            cin >> a >> b;
            if(a >= 0){
                if(b <= 1000){
                    inside = inside - a + b;
                    if(inside >= min){
                        min = inside;
                    }
                    //min = max(inside, min);
                }
                else{
                    cout << "INCORRECT B" << endl;
                }        
            }
            else{
                cout << "INCORRECT A" << endl;
            }
        }
        cout << "MINIMUM POSSIBLE CAPACITY: " << min << endl;
    }
    else{
        cout << "INCORRECT N" << endl;
    }
    return 0;
}