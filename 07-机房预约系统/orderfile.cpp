#include "orderfile.h"

OrderFile::OrderFile() {
	ifstream ifs(ORDER_FILE, ios::in);
	// 日期, 时间段, 编号, 姓名, 机房编号, 状态
	string date, interval, stuId, stuName, roomId, status;

	this->m_Size = 0; //预约记录个数
	while (ifs >> date && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status) {
		
		map<string, string> m;
		this->addOrderToMap(m, date);
		this->addOrderToMap(m, interval);
		this->addOrderToMap(m, stuId);
		this->addOrderToMap(m, stuName);
		this->addOrderToMap(m, roomId);
		this->addOrderToMap(m, status);

		this->m_orderData[this->m_Size] = m;
		this->m_Size++;
	}

	ifs.close();
}
void OrderFile::addOrderToMap(map<string, string>& m, string s) {
	int pos = s.find(":");
	if (pos != -1) {
		string key = s.substr(0, pos);
		string value = s.substr(pos + 1, s.size() - pos - 1);
		m[key] = value;
	}
}
void OrderFile::updateOrder() {
	if (this->m_Size == 0) return;

	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	rep(i, 0, this->m_Size - 1) {
		ofs << "date:" << this->m_orderData[i]["date"] << " ";
		ofs << "interval:" << this->m_orderData[i]["interval"] << " ";
		ofs << "stuId:" << this->m_orderData[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderData[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderData[i]["status"] << endl;
	}
	ofs.close();
}
