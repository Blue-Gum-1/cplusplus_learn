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

#include "myArray.hpp"
#include "person.hpp"

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

void test01() {
    MyArray<int> arr1(5);
    MyArray<int> arr2(arr1);
    MyArray<int> arr3(100);
    arr3 = arr2;
    rep(i, 0, 4) arr1.push_back(5 - i);
    rep(i, 0, 3) arr3.push_back(i);
    rep(i, 0, 4)
        cout << "arr1[" << i << "] = " << arr1[i]
            << ", arr2[" << i << "] = " << arr2[i]
            << ", arr3[" << i << "] = " << arr3[i] << endl;
    debug(arr3的容量, arr3.getCapacity());
    debug(arr3的大小, arr3.size());
}

// 测试自定义数据类型
void test02() {
    MyArray<Person<string, int>> arr1(5);
    arr1.push_back(Person<string, int>("tom", 20));
    arr1.push_back(Person<string, int>("jerry", 23));
    MyArray<Person<string, int>> arr2(10);
    arr2 = arr1;
    arr2.push_back(Person<string, int>("john", 38));
    arr1.showMyArray();
    arr2.showMyArray();
}

int main(int argc, char* argv[]) {
    test01();
    test02();
    // system("pause");
    return EXIT_SUCCESS;
}
