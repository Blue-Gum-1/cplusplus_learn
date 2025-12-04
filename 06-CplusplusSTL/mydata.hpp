#pragma once
#include <iostream>
#include <string>
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

class MyData {
private:
    int* arr; // 堆内存数组
    
public:
    int size;
    // 构造函数：分配堆内存
    MyData(int n) : size(n) {
        arr = new int[n];
        cout << "构造：分配 " << n << " 字节堆内存\n";
    }
    // 拷贝构造：深拷贝（分配新内存+拷贝数据）
    MyData(const MyData& other) {
        size = other.size;
        arr = new int[size];
        // 新分配内存
        for (int i = 0; i < size; i++) arr[i] = other.arr[i];
        // 逐字节拷贝
        cout << "拷贝构造：深拷贝 " << size << " 字节\n";
    }
    // 移动构造函数
    MyData(MyData&& other) noexcept {
        // 1. 偷取other的资源（仅指针赋值，无拷贝）
        this->arr = other.arr;
        this->size = other.size;

        // 2. 重置other，避免其析构时释放资源
        other.arr = nullptr;
        other.size = 0;

        cout << "移动构造: 接管 " << this->size << " 字节资源\n";
    }
    ~MyData() {
        delete[] arr;
        cout << "析构：释放内存\n";
    }
};
// 返回临时对象的函数
MyData createData() {
    MyData temp(1000000); // 创建大对象
    return temp; // 返回临时对象（传统方式会触发拷贝）
}