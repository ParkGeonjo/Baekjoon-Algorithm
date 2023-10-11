#include <iostream>
using namespace std;

int main() {
    int a[26];
    string s;
    
    cin >> s;
    
    for(int i = 0; i < 26; i++) a[i] = -1;
    for(int i = 0; i < s.size(); i++) {
        if(a[s[i] - 97] == -1) a[s[i] - 97] = i;
    }
    for(int i = 0; i < 26; i++) cout << a[i] << " ";
}