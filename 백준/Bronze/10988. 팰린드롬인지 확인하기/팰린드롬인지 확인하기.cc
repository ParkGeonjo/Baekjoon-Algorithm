#include <iostream>
using namespace std;

int main() {
    int i, j;
    string s;
    
    cin >> s;
    
    for(i = 0, j = s.length() - 1; i <= j; i++, j--) {
        if(s[i] != s[j]) {
            cout << "0";
            return 0;
        }
    }
    cout << "1";
    return 0;
}