#include <iostream>
using namespace std;

int partition(int list[], int left, int right) {
    int low = left;
    int high = right + 1;
    int temp;

    do {
        do {
            low++;
        } while (low <= right && list[low] < list[left]);
        do {
            high--;
        } while (high >= left && list[high] > list[left]);
        if (low < high) {
            temp = list[low];
            list[low] = list[high];
            list[high] = temp;
        }
    } while (low < high);
    temp = list[high];
    list[high] = list[left];
    list[left] = temp;

    return high;
}

void quick_sort(int list[], int left, int right) {
    if (left < right) {
        int pivot = partition(list, left, right);

        quick_sort(list, left, pivot - 1);
        quick_sort(list, pivot + 1, right);
    }
}

int main() {
    int n, num = 0, list[10];

    cin >> n;

    for (int i = 0; n != 0; i++) {
        list[i] = n % 10;
        n /= 10;
        num++;
    }

    quick_sort(list, 0, num - 1);

    for (int i = num - 1; i >= 0; i--) cout << list[i];
}