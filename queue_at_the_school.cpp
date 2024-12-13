#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, t;
    string s;
    cout << "Insert the number of students and the time: " << endl;
    cin >> n >> t;
    cout << "Insert the order of the queue: " << endl;
    cin >> s;
    if(1 <= n && t <= 50){
        for (int j = 0; j < t; j++){
            for (int i = 0; i < n; i++){
                if(s[i] == 'B' && s[i+1] == 'G'){
                    char tmp = s[i];
                    s[i] = s[i+1];
                    s[i+1] = tmp;
                    //swap(s[i], s[i+1]);
                    i++;
                }
            }
        }
        cout << s << endl;
    }
    else{
        cout << "NO N / T" << endl;
    }
    return 0;
}