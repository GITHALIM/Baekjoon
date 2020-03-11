#include <cstdio>
using namespace std;
int n, a, sum = 0;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%1d", &a);
		sum += a;
	}
	printf("%d", sum);
	return 0;
}
