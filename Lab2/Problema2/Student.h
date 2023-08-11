#pragma once
#include <string>
class Student
{
	char name[20];
	float math, english, history;

public:
	Student();
	void setName(const char* name);
	const char* getName();
	void setMath(float x);
	float getMath();
	void setEnglish(float x);
	float getEnglish();
	void setHistory(float x);
	float getHistory();
	float getAvgGrade();

};
