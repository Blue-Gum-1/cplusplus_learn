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
    1. ָ�����ڴ浥Ԫ
        1) �ڴ浥Ԫ: ��������ڴ���С�Ĵ洢��λ, ��СΪ "1�ֽ�(byte) = 8����(bit)"
            ÿһ���ڴ浥Ԫ����һ��Ψһ�ı��, ������ڴ浥Ԫ�ı��Ϊ "��ַ"
        2) ָ��: "��ַ"
        3) ָ�����: �� "��ַ" �ı���
    2. ָ��Ķ����ʹ��
        1) int a = 10; int *p = &a; *p = 200;
        2) *p: ָ��Ľ�����(�ֽм������), ��p����������ȡ��, ���ɵ�ַ����, �ҵ��õ�ַ��Ӧ���ڴ�ռ�
            ---- *p����ֵ, ��ʾ�����ݵ��洢�ռ���; *p����ֵ, ��ʾȡ���洢�ռ��е�����
        3) ָ��Ĵ�С(sizeof)�������޹�, ���ڵ�ǰʹ�õ�ƽ̨�ܹ��йء�32λ: 4�ֽ�, 64λ: 8�ֽ�
    3. Ұָ��
        1) û��һ����Ч�ĵ�ַ�ռ��ָ��, ��: int *p; *p = 1000; ��
        2) p������һ��ֵ, ����ֵ���ǿɷ��ʵ��ڴ�����, ��: int *p = 1000; *p = 2000; ��
            int a = 10; int *p; p = &a; *p = 20; ��
    4. ��ָ��: int *p = NULL;
    5. ����ָ��, �ֽ�����ָ��: void *p;
        int a = 10; void *p = &a; printf("%d\n", *(int *)p);
    6. const ����ָ��:
        1) const int *p: ���޸� p, �����޸� *p
        2) int const *p: ���޸� p, �����޸� *p
        3) int * const p: �����޸� p, ���޸� *p
        4) const int * const p: p �� *p �������޸�
    7. ָ������: int a[] ... b[] ... c[] = ...; int *p[] = {a,b,c...};
        ���ʷ�ʽ�൱�ڶ�ά����: p[1][2] <==> *(*(p + 1) + 2)
*/

int main004()
{
    {
        int a = 10;
        int* p = &a;
        cout << *p << endl;
    }

    int a = 10;
    void* p = &a;
    printf("sizeof void* p = %d\n", sizeof(p));
    printf("%d\n", *(int*)p);

    int b = 20;
    const int* s = &a;
    s = &b; // ָ�볣��, ����ָ��, ָ�뺯��, ����ָ��

    int arr[] = { 1, 2, 3, 4, 5 };
    int* arr_p = arr;
    while (arr_p < arr + 5) {
        printf("%d\n", *arr_p);
        ++arr_p;
    }

    {
        int a = 0x12345678;
        char b = a;
        printf("%x\n", b);
    }

    {
        int a[] = { 1, 2, 3, 4 };
        int b[] = { 5, 6, 7, 8 };
        int c[] = { 9, 10, 11, 12 };
        int* p[] = { a, b, c };
        cout << p[1][1] << "  " << *(*(p + 1) + 1) << endl;
    }

    {
        cout << "ָ������������ָ��" << endl;
        // ����ָ��
        int c[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
        int(*s2)[4] = c;
        rep(i, 0, 2) rep(j, 0, 3) cout << (*(*(s2 + i) + j)) << endl;
    }

    system("pause");
    return EXIT_SUCCESS;
}
