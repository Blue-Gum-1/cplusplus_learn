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
    1. 指针与内存单元
        1) 内存单元: 计算机中内存最小的存储单位, 大小为 "1字节(byte) = 8比特(bit)"
            每一个内存单元都有一个唯一的编号, 称这个内存单元的编号为 "地址"
        2) 指针: "地址"
        3) 指针变量: 存 "地址" 的变量
    2. 指针的定义和使用
        1) int a = 10; int *p = &a; *p = 200;
        2) *p: 指针的解引用(又叫间接引用), 将p变量的内容取出, 当成地址看待, 找到该地址对应的内存空间
            ---- *p做左值, 表示存数据到存储空间中; *p做右值, 表示取出存储空间中的内容
        3) 指针的大小(sizeof)与类型无关, 至于当前使用的平台架构有关。32位: 4字节, 64位: 8字节
    3. 野指针
        1) 没有一个有效的地址空间的指针, 如: int *p; *p = 1000; ×
        2) p变量有一个值, 但该值不是可访问的内存区域, 如: int *p = 1000; *p = 2000; ×
            int a = 10; int *p; p = &a; *p = 20; √
    4. 空指针: int *p = NULL;
    5. 泛型指针, 又叫万能指针: void *p;
        int a = 10; void *p = &a; printf("%d\n", *(int *)p);
    6. const 修饰指针:
        1) const int *p: 可修改 p, 不可修改 *p
        2) int const *p: 可修改 p, 不可修改 *p
        3) int * const p: 不可修改 p, 可修改 *p
        4) const int * const p: p 和 *p 都不可修改
    7. 指针数组: int a[] ... b[] ... c[] = ...; int *p[] = {a,b,c...};
        访问方式相当于二维数组: p[1][2] <==> *(*(p + 1) + 2)
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
    s = &b; // 指针常量, 常量指针, 指针函数, 函数指针

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
        cout << "指针数组与数组指针" << endl;
        // 数组指针
        int c[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
        int(*s2)[4] = c;
        rep(i, 0, 2) rep(j, 0, 3) cout << (*(*(s2 + i) + j)) << endl;
    }

    system("pause");
    return EXIT_SUCCESS;
}
