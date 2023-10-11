#include <iostream>
using namespace std;

int main() {
    int a[100], n, m, i, j, k;
    
    cin >> n >> m;
    
    for(int x = 0; x < n; x++) a[x] = 0;
    for(int x = 0; x < m; x++) {
        cin >> i >> j >> k;
        for(int y = i - 1; y <= j - 1; y++) a[y] = k;
    }
    for(int x = 0; x < n; x++) cout << a[x] << " ";
}