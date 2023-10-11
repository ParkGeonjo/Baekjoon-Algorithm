#include <iostream>
using namespace std;

int main() {
    int H, M;
    
    cin >> H >> M;
    
    if(M < 45) {
        H--;
        M = (M-45)+60;
        if(H < 0)
            H = 23;
    }
    else {
        M -= 45;
    }
    cout << H << " " << M;
}