#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << (n) << endl
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*

*/
class Person {
public:
    int m_A, m_B;
    int* m_Age;
    /*Person operator+(const Person& p) {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }*/

    // ��Ա���� ʵ�ֲ��� "cout << p", "p << cout" ����������Ҫ��Ч��
    ostream& operator<<(ostream& out) {
        out << "m_A = " << this->m_A << ", m_B = " << this->m_B;
        return out;
    }
    Person() { }
    Person(int age) { m_Age = new int(age); }
    ~Person() {
        if (m_Age != null) {
            delete m_Age;
            m_Age = null;
        }
    }
    Person& operator=(const Person& p) {
        // 1. ���ж��Ƿ��������ڶ���, ���������ͷŸɾ�
        if (m_Age != null) delete m_Age, m_Age = null;
        // 2. ���
        this->m_Age = new int(*p.m_Age);
        return *this;
    }
};
Person operator+(Person& p1, Person& p2) {
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

Person operator+(const Person& p1, const int& a) {
    Person temp;
    temp.m_A = p1.m_A + a;
    temp.m_B = p1.m_B + a;
    return temp;
}

ostream& operator<<(ostream& out, const Person& p) {
    out << "m_A = " << p.m_A << ", m_B = " << p.m_B;
    return out;
}

class MyInteger {
    int m_Num;
    friend ostream& operator<<(ostream& out, const MyInteger& myint);
public:
    MyInteger() { m_Num = 0; }
    MyInteger& operator++() { ++this->m_Num; return *this; }
    MyInteger operator++(int) {
        MyInteger temp = *this;
        ++this->m_Num;
        return temp;
    }
};
ostream& operator<<(ostream& out, const MyInteger& myint) {
    out << myint.m_Num;
    return out;
}

class Student {
public:
    Student(string name, int age): m_Name(name), m_Age(age) { }
    bool operator==(const Student& s) { return m_Name == s.m_Name && m_Age == s.m_Age; }
    string m_Name;
    int m_Age;
};

class MyPrint {
public:
    // �����������������(����С����)
    void operator()(string test) { cout(test); }
};

void test_012_06_01() { // ���ԼӺ����������
    Person p1, p2;
    p1.m_A = p1.m_B = p2.m_A = p2.m_B = 10;
    Person p3 = p1 + p2;
    debug(p3, p3);
    Person p4 = p1 + 20;
    debug(p4, p4);
}

void test_012_06_02() { // �����������������
    MyInteger myint;
    debug(myint, ++myint);
    debug(myint, myint++);
    debug(myint, myint++);
    debug(myint, myint);
}

void test_012_06_03() { // ���Ը�ֵ���������
    Person p1(18), p2(20);
    p2 = p1;
    debug(p1������, *p1.m_Age);
    debug(p2������, *p2.m_Age);
}

void test_012_06_04() { // ���Թ�ϵ���������
    Student s1("Tom", 20), s2("Tom", 20);
    cout(s1 == s2 ? "s1��s2����ȵ�" : "s1��s2�ǲ�ͬ��");
}

void test_012_06_05() { // �����������������(����С����)
    MyPrint myPrint;
    myPrint("hello world!"); // ����ʹ�������ǳ����ƺ�������, ��˳�Ϊ�º���
    MyPrint()("����������������");
}

int main012_06(int argc, char* argv[])
{
    //test_012_06_01();
    //test_012_06_02();
    //test_012_06_03();
    //test_012_06_04();
    test_012_06_05();

    system("pause");
    return EXIT_SUCCESS;
}
