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
    - 利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
    - 排序规则从大到小，排序算法为选择排序
    - 分别利用char数组和int数组进行测试
*/

template<class T>
void mySwap(T & a, T & b) {
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void mySort(T arr[], int len) {
    rep(i, 0, len - 1) rep(j, 0, i - 1) {
        if (arr[i] > arr[j]) mySwap(arr[i], arr[j]);
    }
}

template<class T>
void printArray(T arr[], int len) {
    rep(i, 0, len - 1) cout << arr[i] << " ";
    cout << endl;
}

int main003(int argc, char* argv[]) {
    int arr1[] = { 1, 2, 3, 4, 5 };
    char arr2[] = "hello";

    printArray(arr1, 5);
    mySort(arr1, 5);
    printArray(arr1, 5);

    printArray(arr2, 5);
    mySort(arr2, 5);
    printArray(arr2, 5);

    // system("pause");
    return EXIT_SUCCESS;
}
