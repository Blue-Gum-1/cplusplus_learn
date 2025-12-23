#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

#include "globalFile.h"

#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define repit(it, m) for (auto it = (m.begin()); it != (m.end()); ++it)

class OrderFile {
public:
    //构造函数
    OrderFile();
    void addOrderToMap(map<string, string>& m, string s);
    //更新预约记录
    void updateOrder();

    //记录的容器  key --- 记录的条数  value --- 具体记录的键值对信息
    map<int, map<string, string>> m_orderData;
    //预约记录条数
    int m_Size;
};