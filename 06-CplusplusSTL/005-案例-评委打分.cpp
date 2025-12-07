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

#include "student.h"

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

void createStudent(vector<Student>&v) {
	string nameSpeed = "ABCDE";
	rep(i, 0, 4) {
		string name = "选手";
		name += nameSpeed[i];
		int score = 0;
		Student s(name, score);
		v.push_back(s);
	}
}

void setScore(vector<Student>& v) {
	rep(i, 0, v.size() - 1) {
		int sumScore = 0;

		deque<int> d;
		rep(i, 1, 10) {
			int score = rand() % 41 + 60; // 60 ~ 100
			sumScore += score;
			d.push_back(score);
		}
		sort(d.begin(), d.end());
		sumScore -= d.front() + d.back();
		v[i].m_Score = sumScore / 8.0;
	}
}

void showScore(vector<Student>& v) {
	rep(i, 0, v.size() - 1) v[i].showStudent();
}

int main(int argc, char* argv[]) {
	// 随机数种子
	srand((unsigned int) time(null));

	// 1. 创建5个学生
	vector<Student> s;
	createStudent(s);

	// 2. 打分
	setScore(s);

	// 3. 显示最后得分
	showScore(s);

	// system("pause");
	return EXIT_SUCCESS;
}
