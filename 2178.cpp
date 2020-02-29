#include <iostream>
#include <queue>
using namespace std;
int a[100][100];
int check[100][100];
int nx[4] = { 0, 0, -1, 1 };
int ny[4] = { 1, -1, 0, 0 };
int n, m;

void bfs(queue<pair<int, int>> q, int cnt) {
	queue<pair<int, int>> q1;

	while(q.size() != 0) {
		int x = q.front().first;
		int y = q.front().second;

		if (a[x][y] == 1 && check[x][y] == 0) {
			check[x][y] = cnt;

			for (int i = 0; i < 4; i++) {
				int t = x + ny[i];
				int s = y + nx[i];
				if (0 <= t && t < n && 0 <= s && s < m) {
					if (a[t][s] == 1 && check[t][s] == 0) {
						q1.push(make_pair(t, s));
					}
				}				
			}
		}
		q.pop();
	}

	if (q1.size() == 0)	return;
	bfs(q1, ++cnt);
}

int main() {
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}

	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	bfs(q, 1);

	printf("%d", check[n - 1][m - 1]);

	return 0;

}
