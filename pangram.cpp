#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    string s;
    char s_min[n];
    set<char> s_lett;
    cout << "Insert the number of letters: " << endl;
    cin >> n;
    if(n >= 1 && n <= 100){
        cout << "Insert the word: " << endl;
        cin >> s;
        if(n == s.length()){
            for (int i = 0; i < n; i++){
                s_min[i] = s[i];
                s_lett.insert(s_min[i]);
            }
            if (s_lett.size() == 27){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}