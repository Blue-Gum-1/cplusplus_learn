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
    1. �﷨��ʽ: ��������& ���� = ԭ��; // ���ʾ��Ǹ����������
*/

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

//���ؾ�̬��������
int& test02() {
    static int a = 20;
    return a;
}

int main010(int argc, char* argv[])
{
    int a = 10, b = 20;
    printf("a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);

    // int &c; // ����, ���ñ����ʼ��
    int& c = a; // һ����ʼ����, �Ͳ����Ը���
    c = b; // ���Ǹ�ֵ����, ���Ǹ�������

    int& res2 = test02();
    cout << "res2 = " << res2 << endl; // 
    cout << "res2 = " << res2 << endl;

    test02() = 1000; // ��������ֵ����ô���뷵������

    cout << "res2 = " << res2 << endl;
    cout << "res2 = " << res2 << endl;

    system("pause");
    return EXIT_SUCCESS;
}
