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

class MyCompare {
public:
	bool operator()(int num1, int num2) const {
		return num1 > num2;
	}
};
void test14_01() {
	vector<int> v{ 10, 50, 30, 40, 20 };
	sort(v.begin(), v.end()); // 默认从小到大排序
	rep(i, 0, v.size() - 1) cout << v[i] << " ";
	cout << endl;

	sort(v.begin(), v.end(), MyCompare()); // 使用函数对象改变算法策略, 排序从大到小
	rep(i, 0, v.size() - 1) cout << v[i] << " ";
	cout << endl;
}

int main014(int argc, char* argv[]) {
	test14_01();
	// system("pause");
	return EXIT_SUCCESS;
}
