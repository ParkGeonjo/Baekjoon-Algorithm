#include <iostream>
using namespace std;

int main() {
    int n, i, address = 1;
    
    cin >> n;
    
    for(i = 1; address < n; i++) {
        address += 6 * i;
    }
    cout << i << endl;
}