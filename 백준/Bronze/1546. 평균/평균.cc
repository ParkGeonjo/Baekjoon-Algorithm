#include <iostream>
using namespace std;

int main() {
    float score[1000], ave = 0, max = 0;
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> score[i];
    for(int i = 0; i < n; i++) if(score[i] > max) max = score[i];
    for(int i = 0; i < n; i++) score[i] = score[i] / max * 100;
    for(int i = 0; i < n; i++) ave += score[i];
    cout << ave / n;
}