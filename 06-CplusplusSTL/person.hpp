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

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	friend ostream& operator<<(ostream& os, const Person& p) {
		os << "ÐÕÃû = " << p.m_Name << ", ÄêÁä = " << p.m_Age;
		return os;
	}
	string m_Name;
	int m_Age;
};