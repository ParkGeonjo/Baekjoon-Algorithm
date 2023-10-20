#include <iostream>
using namespace std;

int main() {
    int sq[3][2];
    
    cin >> sq[0][0] >> sq[0][1] >> sq[1][0] >> sq[1][1] >> sq[2][0] >> sq[2][1];
    
    if(sq[0][0] == sq[1][0]) cout << sq[2][0] << " ";
    else if(sq[0][0] == sq[2][0]) cout << sq[1][0] << " ";
    else cout << sq[0][0] << " ";
    
    if(sq[0][1] == sq[1][1]) cout << sq[2][1] << " ";
    else if(sq[0][1] == sq[2][1]) cout << sq[1][1] << " ";
    else cout << sq[0][1] << " ";
}