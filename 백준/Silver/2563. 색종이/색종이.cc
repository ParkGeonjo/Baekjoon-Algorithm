#include <iostream>
using namespace std;

int main() {
    int a[100][100] = { { 0, }, }, n, x, y, area = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        for(int k = x; k < x + 10; k++) {
            for(int l = y; l < y + 10; l++) {
                a[k][l] = 1;
            }
        }
    }
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(a[i][j] == 1) area++;
        }
    }
    cout << area;
}