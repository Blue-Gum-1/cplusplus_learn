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

/*
	- 实现一个通用的数组类，要求如下：
		- 可以对内置数据类型以及自定义数据类型的数据进行存储
		- 将数组中的数据存储到堆区
		- 构造函数中可以传入数组的容量
		- 提供对应的拷贝构造函数以及operator=防止浅拷贝问题
		- 提供尾插法和尾删法对数组中的数据进行增加和删除
		- 可以通过下标的方式访问数组中的元素
		- 可以获取数组中当前元素个数和数组的容量
*/

template<class T>
class MyArray {
public:
	MyArray(int capacity) {
		//cout("调用MyArray有参构造函数");
		this->pAddress = new T[capacity];
		this->m_Capacity = capacity;
		this->m_Size = 0;
	}
	MyArray(const MyArray& arr) {
		//cout("调用MyArray拷贝构造函数");
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		// 深拷贝
		this->pAddress = new T[arr.m_Capacity];
		// 将arr中的数据都拷贝过来
		rep(i, 0, arr.m_Size - 1)
			this->pAddress[i] = arr.pAddress[i];
	}
	MyArray& operator=(const MyArray& arr) {
		//cout("调用MyArray的operator=函数");
		// 先判断原来堆区是否有数据, 若有先释放
		if (this->pAddress != null) {
			delete[] this->pAddress;
			this->pAddress = null;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		// 深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		rep(i, 0, arr.m_Size - 1)
			this->pAddress[i] = arr.pAddress[i];

		return *this;
	}
	T& operator[](int index) {
		return this->pAddress[index];
	}
	void push_back(const T& t) {
		if (this->m_Capacity == this->m_Size) return;
		this->pAddress[this->m_Size] = t;
		++this->m_Size;
	}
	void pop_back() {
		if (this->m_Size == 0) return;
		--this->m_Size;
	}
	int getCapacity() {
		return this->m_Capacity;
	}
	int size() {
		return this->m_Size;
	}
	void showMyArray() {
		cout("当前数据元素有以下内容:");
		rep(i, 0, this->m_Size - 1)
			cout << this->pAddress[i] << endl;
	}
	~MyArray() {
		if (this->pAddress != null) {
			//cout("调用MyArray析构函数");
			delete [] this->pAddress;
			this->pAddress = null;
			m_Capacity = 0;
			m_Size = 0;
		}
	}
private:
	T* pAddress; // 指向存储数据的堆空间的首地址
	int m_Capacity; // 容量
	int m_Size; // 大小
};