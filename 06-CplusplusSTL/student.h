#pragma once
#include <iostream>
#include <string>
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

class Student {
public:
	Student(string name, int score);
	void showStudent();

	string m_Name;
	double m_Score;
};