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

#include "person.hpp"

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

// accumulate
class CaculatePerson {
public:
	int operator()(int sum, const Person& p) const {
		return sum + p.m_Age;
	}
};
void test22_01() {
	vector<int> v{ 1, 2, 3, 4, 5 };
	int total = accumulate(v.begin(), v.end(), 0);
	cout << "容器 v 的总和为 " << total << endl; // 15

	vector<Person> v2{ Person("张三", 18), Person("李四", 20) };
	auto sumAge = accumulate(v2.begin(), v2.end(), 0, CaculatePerson());
	cout << "容器 v2 中Person的总age为 " << sumAge << endl; // 38
}

// fill
void test22_02() {
	vector<int> v(5);
	fill(v.begin(), v.end(), 10);
	repit(it, v) cout << *it << " "; cout << endl;
}

int main022(int argc, char* argv[]) {
	//test22_01();
	test22_02();
	// system("pause");
	return EXIT_SUCCESS;
}
