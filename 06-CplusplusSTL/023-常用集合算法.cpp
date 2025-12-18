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

// set_intersection
void test23_01() {
	vector<int> v1{ 1, 2, 3, 4, 5 }, v2{ 3, 4, 5, 6, 7 };
	vector<int> vTarget(min(v1.size(), v2.size()));
	// auto -> vector<int>::iterator
	auto endIt = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for (auto it = vTarget.begin(); it != endIt; ++it)
		cout << *it << " "; // 3 4 5
	cout << endl;
}

// set_union
void test23_02() {
	vector<int> v1{ 1, 2, 3, 4, 5 }, v2{ 3, 4, 5, 6, 7 };
	vector<int> vTarget(v1.size() + v2.size());
	// auto -> vector<int>::iterator
	auto endIt = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for (auto it = vTarget.begin(); it != endIt; ++it)
		cout << *it << " "; // 1 2 3 4 5 6 7
	cout << endl;
}

// set_difference
void test23_03() {
	vector<int> v1{ 1, 2, 3, 4, 5 }, v2{ 3, 4, 5, 6, 7 };
	vector<int> vTarget(max(v1.size(), v2.size()));
	cout << "v1与v2的差集:" << endl;
	// auto -> vector<int>::iterator
	auto endIt = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for (auto it = vTarget.begin(); it != endIt; ++it)
		cout << *it << " "; // 1 2
	cout << endl;

	cout << "v2与v1的差集:" << endl;
	endIt = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for (auto it = vTarget.begin(); it != endIt; ++it)
		cout << *it << " "; // 6 7
	cout << endl;
}

int main(int argc, char* argv[]) {
	//test23_01();
	//test23_02();
	test23_03();
	// system("pause");
	return EXIT_SUCCESS;
}
