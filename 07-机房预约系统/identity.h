#pragma once
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define repit(it, m) for (auto it = (m.begin()); it != (m.end()); ++it)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

#include "globalFile.h"

// 身份抽象类
class Identity {
public:
	// 操作菜单
	virtual void operMenu() = 0;

	string m_Name; // 用户名
	string m_Pwd; // 密码
};