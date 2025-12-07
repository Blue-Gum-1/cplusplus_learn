#include "student.h"

Student::Student(string name, int score): m_Name(name), m_Score(score) {
}

void Student::showStudent() {
	cout << "ÐÕÃû: " << this->m_Name << ", ³É¼¨: " << this->m_Score << endl;
}