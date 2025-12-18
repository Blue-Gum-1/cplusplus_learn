#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define repit(it, m) for (auto it = (m.begin()); it != (m.end()); ++it)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

// copy
void test21_01() {
	vector<int> v{ 1, 2,3, 4, 5 };
	vector<int> v2(v.size());
	copy(v.begin(), v.end(), v2.begin());
	repit(it, v2) cout << *it << " "; cout << endl;
}

// replace
void test21_02() {
	vector<int> v{ 1, 2, 3, 4, 1, 2, 3, 4 };
	replace(v.begin(), v.end(), 1, 10);
	repit(it, v) cout << *it << " "; cout << endl; // 10 2 3 4 10 2 3 4
}

// replace_if
class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};
void test21_03() {
	vector<int> v{ 1, 3, 5, 7, 9 };
	replace_if(v.begin(), v.end(), GreaterFive(), -1);
	repit(it, v) cout << *it << " "; cout << endl; // 1 3 5 -1 -1
}

// swap
void test21_04() {
	vector<int> v1{ 1, 2, 3, 4, 5 }, v2{ 10, 20, 30 };
	cout << "交换前:" << endl;
	repit(it, v1) cout << *it << " "; cout << endl;
	repit(it, v2) cout << *it << " "; cout << endl;
	cout << "交换后:" << endl;
	swap(v1, v2);
	repit(it, v1) cout << *it << " "; cout << endl;
	repit(it, v2) cout << *it << " "; cout << endl;
}

int main021(int argc, char* argv[]) {
	//test21_01();
	//test21_02();
	//test21_03();
	test21_04();
	// system("pause");
	return EXIT_SUCCESS;
}
