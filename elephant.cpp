#include <iostream>
using namespace std;
int main(){
    int x, steps = 0;
    cout << "Insert the coordinate: " << endl;
    cin >> x;
    if(1 <= x && x <= 1000000){
        while(x >= 5){
            steps++;
            x-=5;
        }
        while(x >= 4){
            steps++;
            x-=4;
        }
        while(x >= 3){
            steps++;
            x-=3;
        }
        while(x >= 2){
            steps++;
            x-=2;
        }
        while(x >= 1){
            steps++;
            x-=1;
        }
        //steps = x/5;
        //x = x % 5;
        //if (x != 0) {
            //steps++;
        //}
        cout << "Minimum steps: " << steps << endl;
    }
    else{
        cout << "NO COORDINATE" << endl;
    }
    return 0;
}