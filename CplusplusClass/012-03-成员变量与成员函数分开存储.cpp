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
class Person_03 {
    int m_A; // �Ǿ�̬��Ա����: ������Ķ�����
    static int m_B; // ��̬��Ա����: ��������Ķ���

    int func_01(); // �Ǿ�̬��Ա����: ��������Ķ���
    void static func_02(); // ��̬��Ա����: ��������Ķ���
};
int Person_03::m_B = 10;

void test_012_03_01() {
    Person_03 p;
    /*
        �ն���ռ�ÿռ�Ϊ1
        C++���������ÿ���ն���ķ���һ���ֽڿռ�, ��Ϊ�����ֿն���ռ�ڴ��λ��
        ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
    */
    debug(sizeof p, sizeof(p)); 
}

void test_012_03_02() {
    Person_03 p;
    
    debug(sizeof p, sizeof(p));
    debug(sizeof Person, sizeof(Person_03));
}

int main(int argc, char* argv[])
{
    // test_012_03_01();

    test_012_03_02();

    system("pause");
    return EXIT_SUCCESS;
}
