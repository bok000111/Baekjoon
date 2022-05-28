#include <cstdio>

int main()
{
	int arr[501][501] {0};
	int n, m, b;
	
	scanf("%d %d %d", &n, &m, &b);
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <m; j++) {
			scanf("%d", &arr[i][j]);
			b += arr[i][j];
		}
	}
	
	int tmp = b / (n * m);
	int mintime = 2147483647;
	int res, time;
	int lv = 0;
	
	for(;;) {
		if((n * m * lv) > b) {
			break;
		}
		time = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(arr[i][j] > lv) {
					time += 2 * (arr[i][j] - lv);
				}
				else {
					time += lv - arr[i][j];
				}
			}
		}
		if(mintime >= time) {
			mintime = time;
			res = lv;
		}
		lv++;
	}
	
	printf("%d %d", mintime, res);
	return 0;
}