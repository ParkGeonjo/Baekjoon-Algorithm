#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    bool a[42] = {false};
    
    for(int i = 0; i < 10; i++) {
        cin >> n;
        a[n%42] = true;
    }
    for(int i = 0; i < 42; i++) if(a[i] == true) count++;
    
    cout << count;
}