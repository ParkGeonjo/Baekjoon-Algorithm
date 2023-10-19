#include <iostream>
using namespace std;

int main() {
    int n, num, count = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> num;
        
        if(num == 1) continue;
        
        count++;
        
        for(int j = 2; j * j <= num; j++) {
            if(num % j == 0) {
                count--;
                break;
            }
        }
    }
    
    cout << count;
}