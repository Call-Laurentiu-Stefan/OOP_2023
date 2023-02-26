#include "Student.h"

void Student::setName(const char* name)
{
	this->name = name;
}

const char* Student::getName()
{
	return name;
}

void Student::setMath(float x)
{
	math = x;
}

float Student::getMath()
{
	return math;
}

void Student::setEnglish(float x)
{
	english = x;
}

float Student::getEnglish()
{
	return english;
}

void Student::setHistory(float x)
{
	history = x;
}

float Student::getHistory()
{
	return history;
}

float Student::getAvgGrade()
{
	return ((math + english + history) / 3);
}
