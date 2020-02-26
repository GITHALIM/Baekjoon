#include "pch.h"
#include <iostream>
using namespace std;
int a[1000001];
int d[1000001];

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	d[1] = a[1];
	for (int i = 2; i <= n; i++) {
		d[i] = a[i];
		if (d[i-1] > 0)	d[i] = a[i] + d[i-1];		
	}


	int max = d[1];
	for (int i = 2; i <= n; i++) {
		if (max < d[i])	max = d[i];
	}
	
	cout << max << "\n";
	

	return 0;
}
