#include <iostream>
using namespace std;

int main() {
    int a[26], n, word = 0, check;
    string s;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < 26; k++) a[k] = 0;
        
        cin >> s;
        
        for(int j = 0; j < s.length(); j++) {
            if(a[s[j] - 97] == 1) {
                check = 0;
                break;
            }
            if(s[j] != s[j + 1]) a[s[j] - 97] = 1;
            if(j == s.length() - 1) check = 1;
        }
        word += check;
    }
    cout << word;
}
