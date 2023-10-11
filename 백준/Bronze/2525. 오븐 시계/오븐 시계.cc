#include <iostream>
using namespace std;

int main() {
    int H, M, X;
    
    cin >> H >> M;
    cin >> X;
    
    int m = (H*60)+M;
    m += X;
    
    H = (m/60)%24;
    M = m%60;
    
    cout << H << " " << M;
}