#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cout << "Insert the year: " << endl;
    cin >> y;
    if(y >= 1000 && y <= 9000){
        while(true){
            y ++;
            int a = y / 1000;
            int b = y / 100 % 10;
            int c = y / 10 % 10;
            int d = y % 10;
            if (a != b && a != c && a != d && b != c && b != d && c != d){
                break;
            }
        }
        cout << "Next beautiful year: " << y << endl;
    }
    else{
        cout << "NO Y" << endl;
    }
    return 0;
}