#include <iostream>
using namespace std;
int main(){
    int n;
    string word;
    cout << "Give me the number of words: " << endl;
    cin >> n;
    if(1 <= n && n <= 100){
        while(n--){
            cin >> word;
            if (word.length() > 10){
                cout << word[0] << word.length()-2 << word[word.length()-1] << endl;
            }
            else{
                cout << word << endl;
            }
        }
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}