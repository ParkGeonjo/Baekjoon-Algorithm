#include <iostream>
using namespace std;

int main() {
    int a[100], n, m, i, j, temp;
    
    cin >> n >> m;
    
    for(int x = 0; x < n; x++) a[x] = x + 1;
    for(int x = 0; x < m; x++) {
        cin >> i >> j;
        for(i - 1; i < j; i++, j--) {
            temp = a[i - 1];
            a[i - 1] = a[j - 1];
            a[j - 1] = temp;
        }
    }
    for(int x = 0; x < n; x++) cout << a[x] << " ";
}