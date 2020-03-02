#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
vector <int> a[1001];
bool check[1001];	//	방문했으면 true, 아니면 false

int main() {
	int n, m, v;
	scanf("%d %d %d", &n, &m, &v);

	for (int i = 0; i < m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	
	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}

	//	DFS
	stack<int> stk;
	stk.push(v);
	printf("%d ", v);
	check[v] = true;	//	방문했다는 뜻

	while (stk.size() != 0) {
		int x = stk.top();
		bool flag = false;

		for (int i = 0; i < a[x].size(); i++) {
			if (check[a[x][i]] == false) {
				stk.push(a[x][i]);
				printf("%d ", a[x][i]);
				flag = true;
				check[a[x][i]] = true;
				break;
			}
		}

		if (!flag) {
			stk.pop();
		}
	}
	printf("\n");

	//	BFS
	queue<int> qu;
	memset(check, false, sizeof(check));
	
	qu.push(v);
	check[v] = true;
	while (!qu.empty()) {
		int x = qu.front();
		for (int i = 0; i < a[x].size(); i++) {
			if (check[a[x][i]] == false) {
				qu.push(a[x][i]);
				check[a[x][i]] = true;
			}
		}
		printf("%d ", x);
		qu.pop();
	}

	return 0;
}
