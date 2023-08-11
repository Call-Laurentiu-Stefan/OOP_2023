#include <iostream>
#include "Compare.h"
#include "Student.h"

int main()
{
    Student s1, s2;
    s1.setName("Andrei");
    s1.setEnglish(6.4f);
    s1.setHistory(5.f);
    s1.setMath(8.5f);
    s2.setName("Bogdan");
    s2.setEnglish(3.2f);
    s2.setHistory(10.f);
    s2.setMath(9.7f);
    std::cout << s1.getAvgGrade() << " " << s2.getAvgGrade() << std::endl;
    std::cout << compareNames(s1, s2) << " " << compareEnglish(s1, s2) << " " << compareAvg(s1, s2) << std::endl;
    std::cout << s1.getName();
}