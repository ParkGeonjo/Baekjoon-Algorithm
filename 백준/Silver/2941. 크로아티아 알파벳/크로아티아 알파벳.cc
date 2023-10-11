#include <iostream>
using namespace std;

int main() {
    int count = 0;
    string s;
    
    cin >> s;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'c' && (s[i + 1] == '-' || s[i + 1] == '=')) {
            i++;
            count++;
        }
        else if(s[i] == 'd' && s[i + 1] == '-') {
            i++;
            count++;
        }
        else if(s[i] == 'd' && s[i + 1] == 'z') {
            if(s[i + 2] == '=') {
                i += 2;
                count++;
            }
            else {
                i++;
                count += 2;
            }
        }
        else if((s[i] == 'l' || s[i] == 'n') && s[i + 1] == 'j') {
            i++;
            count++;
        }
        else if((s[i] == 's' || s[i] == 'z') && s[i + 1] == '=') {
            i++;
            count++;
        }
        else count++;
    }
    cout << count;
}