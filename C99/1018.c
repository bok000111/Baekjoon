#include <stdio.h>
#include <math.h>

int chess(char board[] [51], int row, int col) {
	int diff = 0;
	char std [9] [9] ={"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"};
	
	for(int i = row; i < row + 8; i++) {
		for(int j = col; j < col + 8; j++) {
			if(std[i - row] [j - col] != board[i] [j]) {
				diff++;
			}
		}
	}
	
	if(diff < 64 - diff) {
		return diff;
	}
	else {
		return 64 - diff;
	}
}
		

int main() {
	int n, m;
	char board[51] [51];
	int res = 64;

	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++) {
		scanf("%s", &board[i]);
	}
	
	for(int i = 0; i < n - 7; i++) {
		for(int j = 0; j < m - 7; j++) {
			if(chess(board, i, j) < res) {
				res = chess(board, i, j);
			}
		}
	}

	printf("%d", res);
	
	return 0;
}