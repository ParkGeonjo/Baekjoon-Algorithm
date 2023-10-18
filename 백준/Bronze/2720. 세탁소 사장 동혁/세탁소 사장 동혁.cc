#include <iostream>
using namespace std;

int main() {
    int t, c, coin[4] = {25, 10, 5, 1};
    
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> c;
        for(int j = 0; j < 4; j++) {
            cout << c / coin[j] << " ";
            c -= (c / coin[j]) * coin[j];
        }
        cout << endl;
    }
}