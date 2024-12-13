#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string first, second;
    cout << "First string: " << endl;
    cin >> first;
    cout << "Second string: " << endl;
    cin >> second;
    if (first.length() == second.length()){
        for (int i = 0; i < first.length(); i++) {
            first[i] = tolower(first[i]);
            second[i] = tolower(second[i]);
        }
        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
        if (first == second){
            cout << "0" << endl;
        }
        else if (first < second){
            cout << "-1" << endl;
        }
        else{
            cout << "1" << endl;
        }
    }
    else{
        cout << "No match between first and second strings" << endl;
    }
    return 0;
}