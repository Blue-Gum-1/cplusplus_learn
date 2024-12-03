#ifndef TEST_H
#define TEST_H

/*
	防止头文件重复包含:
		1. #pragma once 2. #ifndef XXX_H, #define XXX_H, #endif
	头文件内容:
		1. include头文件 2. 函数声明 3. 类型定义 4. 宏定义
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)

int del_num(int a, int b);

#endif // !TEST_H
