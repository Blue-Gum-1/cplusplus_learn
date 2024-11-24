#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*
    int sscanf(const char *str, const char *format, ...);
        - ��Ӧscanf, ��ԭ������Ļ��ȡ�� "��ʽ���ַ���", ��str�л�ȡ
        - ��: sscanf("10+20=30", "%d+%d=%d", &a, &b, &c); ==> a=10, b=20, c=30
    int sprintf(char *str, const char *format, ...);
        - ��Ӧprintf, ��ԭ��д����Ļ�� "��ʽ���ַ���" д������str��
        - ��: sprintf(str, "%d + %d = %d\n", a, b, c); ==> str = 10 + 20 = 30

    int: %d             short: %hd              long: %ld               long long: %lld
    unsigned int: %u    unsigned short: %hu     unsigned long: %lu      unsigned long long: %llu
    char: %c            char*: %s               float: %f               double: %lf

    %m.n: ռ��mλ(������С���㡢С��), ����nλС��
    %0m.nf: ������, ռ��mλ, ����nλС��, ����mλ��0���
    %0s: ���Nλ�ַ�, ����Nλ��0�����
    %Ns: ���Nλ�ַ�, ����Nλ�ÿո������
    %-Ns: ���Nλ�ַ�, ����Nλ�ÿո������

    unsigned int(�˽���): %o
    unsigned int(ʮ������): %x / %X
    double(��ѧ��������ʽ): %e / %E

    void*(16�������ָ��): %p

    ������: 0b / 0B, �� 0b1001001
    �˽���: 0, �� 01234567
    ʮ������: 0x / 0X, �� 0x7fffffff
    ����ٷֺ�: %%
*/

int main000()
{

    double x = 1.25f;
    printf("%07.1lf\n", x); // 1.25 -> 00001.2, 1.26 -> 00001.3

    int a = 1;
    printf("%03d\n", a); // 001

    int maxInt = INT_MAX;
    printf("%x\n", maxInt);

    system("pause");
    return EXIT_SUCCESS;
}