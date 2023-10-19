#include <iostream>
using namespace std;

int main() {
    int n, factor[50000];
    
    while(true) {
        int perfect = 0, index = 0;
        
        cin >> n;
        
        if(n == -1) break;
        
        for(int i = 1; i <= n / 2; i++) {
            if(n % i == 0) {
                perfect += i;
                factor[index++] = i;
            }
        }
        
        if(perfect == n) {
            cout << n << " = ";
            for(int i = 0; i < index - 1; i++) cout << factor[i] << " + ";
            cout << factor[index - 1] << endl;
        }
        else cout << n << " is NOT perfect." << endl;
    }
}
