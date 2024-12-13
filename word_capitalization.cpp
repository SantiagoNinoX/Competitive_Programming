#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string word;
    cout << "Give me the word: " << endl;
    cin >> word;
    if(0 < word.length() && word.length() < 1000){
        word[0] = toupper(word[0]);
        cout << "Capitalized word: " << word << endl;
    }
    else{
        cout << "INCORRECT SIZE" << endl;
    }
    return 0;
}