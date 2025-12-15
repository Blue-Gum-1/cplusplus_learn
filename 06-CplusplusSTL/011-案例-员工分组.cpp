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
	案例描述
		- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
		- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
		- 随机给10名员工分配部门和工资
		- 通过multimap进行信息的插入  key(部门编号) value(员工)
		- 分部门显示员工信息
*/

#define cehua 0
#define meishu 1
#define yanfa 2

class Worker {
public:
	void showWorker() {
		cout << "员工姓名为 " << this->m_Name << ", 工资为 " << this->m_Salary << endl;
	}
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>& v) {
	string nameSeed = "ABCDEFGHIJ";
	rep(i, 0, 9) {
		Worker w;
		w.m_Name = "员工";
		w.m_Name += nameSeed[i];
		w.m_Salary = rand() % 7000 + 3000; // 3000 ~ 9999
		v[i] = w;
	}
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
	rep(i, 0, 9) {
		int deptId = rand() % 3;
		m.insert({ deptId, v[i] });
	}
}

void showWorkerByGroup(multimap<int, Worker>& m) {
	cout << "策划部门:" << endl;

	auto pos = m.find(cehua); // auto -> multimap<int, Worker>::iterator
	int count = m.count(cehua);
	int index = 0;
	while (pos != m.end() && index < count) {
		pos->y.showWorker();
		++pos;
		++index;
	}

	cout << "----------------------------" << endl;
	cout << "美术部门:" << endl;

	pos = m.find(meishu);
	count = m.count(meishu);
	index = 0;
	while (pos != m.end() && index < count) {
		pos->y.showWorker();
		++pos;
		++index;
	}

	cout << "----------------------------" << endl;
	cout << "研发部门:" << endl;

	pos = m.find(yanfa);
	count = m.count(yanfa);
	index = 0;
	while (pos != m.end() && index < count) {
		pos->y.showWorker();
		++pos;
		++index;
	}
}

void test11_01() {
	srand((unsigned int)time(NULL));

	vector<Worker> workers(10);
	multimap<int, Worker> m;
	createWorker(workers);
	setGroup(workers, m);
	showWorkerByGroup(m);
}

int main011(int argc, char* argv[]) {
	test11_01();
	// system("pause");
	return EXIT_SUCCESS;
}
