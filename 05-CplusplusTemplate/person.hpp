#pragma once
#include <iostream>
#include <string>
#define cout(n) cout << n << endl
#define debug(n, m) cout << #n << " = " << (m) << endl
using namespace std;

template<class T1, class T2>
class Person {
public:
    Person(T1, T2);
    void showPerson3();

    string m_Name;
    int m_Age;
};

// 构造函数 类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->m_Name = name;
    this->m_Age = age;
}
// 成员函数 类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson3() {
    debug(姓名2, this->m_Name);
    debug(年龄2, this->m_Age);
}