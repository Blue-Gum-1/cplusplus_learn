#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

void test07_01() {
	queue<int> q;
	rep(i, 1, 5) q.push(i);

	cout << "队列大小为: " << q.size() << endl;
	while (!q.empty()) {
		int front = q.front(), back = q.back(); q.pop();
		cout << "队头元素为: " << front << ", 队尾元素为: " << back << endl;
	}
}

int main007(int argc, char* argv[]) {
	test07_01();
	// system("pause");
	return EXIT_SUCCESS;
}
