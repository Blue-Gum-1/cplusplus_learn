#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define debug(n, m) cout << #n << " = " << (m) << endl;
#define cout(n) cout << (n) << endl;
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*
    1. �ڴ�4��ģ��
        1) �����: .text��. ��ų����Դ����(��������ʽ)
        2) ���ݶ�: .rodata��(ֻ�����ݶ�), .data��(��ʼ�����ݶ�), .bss��(δ��ʼ�����ݶ�)
            a) .data��(��ʼ�����ݶ�): ��ʼ��Ϊ��0�� ȫ�ֱ����;�̬����
            b) .bss��(δ��ʼ�����ݶ�): ��ʼ��Ϊ0 �� δ��ʼ���� ȫ�ֱ����;�̬����; �������ִ��ǰ, �Ὣ�ö����帳ֵΪ0
            c) .rodata��(ֻ�����ݶ�): ��ų���
        3) stack: ջ. ����֮�Ͽ���ջ֡.      windows: 1M, �������� 10M; Linux: 8M, ��������16M
            �ռ�Ƚ�С, ϵͳ�Զ������Զ����䡢�Զ��ͷ�. �洢������: FILO(�Ƚ��ȳ�)
        4) heap: ��. ���û��Զ��������ṩ�ռ�. �ռ��СԼΪ 1.3G+
            �ռ��㹻��


    2. ջ֡
        - ������������ʱ, ϵͳ���� stack �ռ�������һ���ڴ�����, ��������������, ��Ҫ��� �β� �� �ֲ�����(�����ں����ڲ� ).
        - ���������ý���, ����ڴ������Զ����ͷ�(��ʧ)
    3. ����ֵ: ���鲻����Ϊ����ֵ ! ! ! , ֻ��д��ָ�����ʽ

    4. �ѿռ�������ʹ��
        1) void *malloc(size_t size);  ����size��С�Ŀռ�
           a) ����ʵ�����뵽���ڴ�ռ��׵�ַ. ����ͨ��������������! ! !
        2) void free(void *ptr);  �ͷ�����Ŀռ�
        3) ע��:
            a) �����heap(��)�ռ���������, ���Ե�������ʹ��
            b) free��Ŀռ�, ��������ʧЧ, ͨ����free��ĵ�ַ��ΪNULL
            c) free�ĵ�ַ������malloc����ĵ�ַ, ��������
            d) ���malloc֮��ĵ�ַһ����仯, ����ʹ����ʱ����tmp����
    5. ����ָ������ѿռ�
        1) ����ռ�: int **s = (int**) malloc(sizeof(int *) * 3); rep(i, 0, 2) *(s + i) = (int *)malloc(sizeof(int) * 5);
        2) �ͷſռ�: rep(i, 0, 2) free(s[i]), s[i] = null; free(s), s = null;
        3) ע��: ����ռ�ʱ, ���������ռ�, �������ڲ�ռ�; �ͷſռ�ʱ, ��Ҫ���ͷ��ڲ�Ŀռ�, ���ͷ����Ŀռ�.
*/

int main009(int argc, char* argv[])
{
    int* p = (int*)malloc(sizeof(int) * 10); // ����10��int��С�Ŀռ�

    if (p == null) {
        cout("malloc error");
        return -1;
    }

    rep(i, 0, 9) p[i] = i + 10;
    rep(i, 0, 9) cout << "p[" << i << "] = " << *(p + i) << endl;

    free(p), p = null;

    int** s = (int**)malloc(sizeof(int*) * 3);
    rep(i, 0, 2) {
        *(s + i) = (int*)malloc(sizeof(int) * 5);
        rep(j, 0, 4) s[i][j] = i * 5 + j;
    }

    rep(i, 0, 2) rep(j, 0, 4) {
        cout << (*(*(s + i) + j)) << "\t";
        if (j == 4) cout << endl;
    }

    rep(i, 0, 2) free(s[i]), s[i] = null;
    free(s), s = null;

    system("pause");
    return EXIT_SUCCESS;
}
