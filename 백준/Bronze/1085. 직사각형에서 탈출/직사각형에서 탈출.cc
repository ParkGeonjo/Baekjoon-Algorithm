#include <iostream>
using namespace std;

int main() {
    int a, b, w, h, min;
    
    cin >> a >> b >> w >> h;
    
    min = a <= b ? a : b;
    min = w - a <= min ? w - a : min;
    min = h - b <= min ? h - b : min;
    
    cout << min;
}