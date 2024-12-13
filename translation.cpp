#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cout << "Insert the word in Berlandish: " << endl;
    cin >> s;
    cout << "Insert the word in Birlandish: " << endl;
    cin >> t;
    int size = s.length(), count = 0;
    string t_to_s(size, ' ');
    if((s.length() < 100) && (s.length() == t.length())){
        for(int i = 0; i < t.length(); i++){
            t_to_s[i] = t[t.length() - i - 1];
        }
        for (int j = 0; j < size; j++){
            if(s[j] == t_to_s[j]){
                count ++;
            }
        }
        if (count == size){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        //reverse(t.begin(), t.end());
        //if (t == s) {
            //cout << "YES" << endl;
        //}
        //else {
            //cout << "NO" << endl;
        //}
    }
    else{
        cout << "NO WORDS CORRECT" << endl;
    }
    return 0;
}