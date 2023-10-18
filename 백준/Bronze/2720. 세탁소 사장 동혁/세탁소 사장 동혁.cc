#include <iostream>
using namespace std;

int main() {
    int t, c;
    
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int Q = 0, D = 0, N = 0, P = 0;
        cin >> c;
        while(c > 4) {
            if(c >= 25) {
                Q = c / 25;
                c %= 25;
            }
            else if(c >= 10) {
                D = c / 10;
                c %= 10;
            }
            else {
                N = c / 5;
                c %= 5;
            }
        }
        P = c / 1;
        
        cout << Q << " " << D << " " << N << " " << P << endl;
     }
}