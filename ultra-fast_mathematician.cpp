#include <iostream>
using namespace std;
int main(){
    string n1, n2;
    cout << "Insert the first number: " << endl;
    cin >> n1;
    cout << "Insert the second number: " << endl;
    cin >> n2;
    string answer(n1.length(), ' ');
    if(n1.length() <= 100 && n1.length() == n2.length()){
        for (int i = 0; i < n1.length(); i++){
            if (n1[i] != n2[i]){
                answer[i] = '1';
            }
            else{
                answer[i] = '0';
            }
        }
        cout << "Answer: " << answer << endl;
    }
    else{
        cout << "NO N" << endl;
    }
    return 0;
}