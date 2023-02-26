#include "Compare.h"

int compareNames(Student& x, Student& y)
{
    return std::strcmp(x.getName(), y.getName());
}

int compareMath(Student& x, Student& y)
{
    if (x.getMath() == y.getMath()) {
        return 0;
    }
    else if (x.getMath() > y.getMath()) {
        return 1;
    }
    else {
        return -1;
    }
}

int compareEnglish(Student& x, Student& y)
{
    if (x.getEnglish() == y.getEnglish()) {
        return 0;
    }
    else if (x.getEnglish() > y.getEnglish()) {
        return 1;
    }
    else {
        return -1;
    }
}

int compareHistory(Student& x, Student& y)
{
    if (x.getHistory() == y.getHistory()) {
        return 0;
    }
    else if (x.getHistory() > y.getHistory()) {
        return 1;
    }
    else {
        return -1;
    }
}

int compareAvg(Student& x, Student& y)
{
    if (x.getAvgGrade() == y.getAvgGrade()) {
        return 0;
    }
    else if (x.getAvgGrade() > y.getAvgGrade()) {
        return 1;
    }
    else {
        return -1;
    }
}
