#include <iostream>
#include <set>
using namespace std;
int main(){
    int k, n = 4; 
    set<int> ss;
    for (int i = 0; i < n; i++){
        std::cout << "Give me the colour: " << endl;
        cin >> k;
        ss.insert(k);
    }
    std::cout << "Horseshoes min: " << 4 - ss.size() << endl;
    return 0;
}