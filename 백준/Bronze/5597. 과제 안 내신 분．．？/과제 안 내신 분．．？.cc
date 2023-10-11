#include <iostream>
using namespace std;

int main() {
    int num;
    bool a[30] = {false};
    
    for(int i = 0; i < 28; i++) {
        cin >> num;
        a[num - 1] = true;
    }
    
    for(int i = 0; i < 30; i++) if(a[i] == false) cout << i + 1 << " ";
}