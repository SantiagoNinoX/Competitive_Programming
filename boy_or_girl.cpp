#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string user;
    int characters = 0;
    cout << "Give me the username: " << endl;
    cin >> user;
    if(0 < user.length() && user.length() <= 100){
        sort(user.begin(), user.end());
        for (int i = 0; i < user.length(); i++){
            if (user[i] != user[i+1]){
                characters++;
            }
        }
        if(characters % 2 == 0){
            cout << "CHAT WITH HER!" << endl;
        }
        else{
            cout << "IGNORE HIM!" << endl;
        }
    }
    else{
        cout << "INCORRECT SIZE" << endl;
    }
    return 0;
}