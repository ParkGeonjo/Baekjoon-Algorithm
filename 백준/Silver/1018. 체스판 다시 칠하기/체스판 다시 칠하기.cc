#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m, repaint = 250;
	string b_board[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB" };
	string w_board[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW" };
	string board[50];

	cin >> n >> m;
	cin.ignore();

	for (int i = 0; i < n; i++)	getline(cin, board[i]);

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			int check1 = 0, check2 = 0;
			for (int k = 0; k < 8; k++) {
				for (int y = 0; y < 8; y++) {
					if (board[i + k][j + y] != b_board[k][y]) check1++;
					if (board[i + k][j + y] != w_board[k][y]) check2++;
				}
			}
			if (repaint >= check1) repaint = check1;
			if (repaint >= check2) repaint = check2;
		}
	}
	cout << repaint;
}