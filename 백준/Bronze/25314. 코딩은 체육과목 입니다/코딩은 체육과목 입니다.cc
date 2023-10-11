#include <iostream>
using namespace std;

int main() {
    int b;
    
    cin >> b;
    
    b = b / 4;
    
    for(int i = 0; i < b; i++) {
        cout << "long ";
    }
    
    cout << "int";
}