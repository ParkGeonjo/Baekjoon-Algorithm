#include <iostream>
using namespace std;

int main() {
    int a[26] = { 0, }, max = 0;
    char c = 0;
    string s;
    
    cin >> s;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] < 97) a[s[i] - 65]++;
        else a[s[i] - 97]++;
    }
    for(int i = 0; i < 26; i++) {
        if(max == a[i]) c = '?';
        else if(max < a[i]) {
            max = a[i];
            c = i + 65;
        }
    }
    cout << c;
}