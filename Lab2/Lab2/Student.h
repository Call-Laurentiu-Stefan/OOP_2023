#pragma once
class Student
{
	const char* name;
	float math, english, history;

public:
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

