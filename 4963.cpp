#include <iostream>
using namespace std;
int a[50][50];
int d[50][50];
int dx[8] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int dy[8] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int w, h;
void dfs(int x, int y, int cnt) {
	d[x][y] = cnt;
	for (int k = 0; k < 8; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];
		if (0 <= nx && nx < h && 0 <= ny && ny < w) {
			if (a[nx][ny] == 1 && d[nx][ny] == 0) {
				dfs(nx, ny, cnt);
			}
		}
	}
}
int main() {
	while (true) {
		cin >> w >> h;

		if (w == 0 && h == 0)    break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> a[i][j];
				d[i][j] = 0;
			}
		}

		int cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (a[i][j] == 1 && d[i][j] == 0) {
					dfs(i, j, ++cnt);
				}
			}
		}

		cout << cnt << "\n";
	}
	return 0;
}
