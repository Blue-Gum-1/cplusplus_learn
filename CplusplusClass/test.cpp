#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

const int N = 100010;
int n, f, a[N];
double pre[N];

bool check(double avg) {
	for (int i = 1; i <= n; ++i)
		pre[i] = pre[i - 1] + a[i] - avg;

	double minPre = 0;
	for (int i = 0, j = f; j <= n; ++i, ++j) {
		minPre = (minPre < pre[i]) ? minPre : pre[i]; // min(minPre, pre[i]);
		if (pre[j] - minPre >= 0) return 1;
	}
	return 0;
}

int main() {
	double l = 0, r = 0;
	scanf("%d %d", &n, &f);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		r = (r > double(a[i])) ? r : double(a[i]); // max(r, double(a[i]));
	}

	while (r - l > 1e-5) {
		double mid = (l + r) / 2;
		if (check(mid)) l = mid;
		else r = mid;
	}

	printf("%d\n", floor(r * 1000));

	return 0;
}