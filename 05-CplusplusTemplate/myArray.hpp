#pragma once
#include <iostream>
#include <string>
#define null NULL
#define endl "\n"
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

template<class T>
class MyArray {
public:
	MyArray(int capacity) {

	}
	MyArray(const MyArray& arr) {

	}
	MyArray& operator=(cosnt MyArray& myArray) {
		if (arr != null) delete arr, arr = null;

	}
	~MyArray() {
		if (pAddress != null) {
			delete pAddress;
			pAddress = null;
			m_Capacity = 0;
			m_Size = 0;
		}
	}
private:
	T* pAddress; // 指向存储数据的堆空间的首地址
	int m_Capacity; // 容量
	int m_Size; // 大小
};