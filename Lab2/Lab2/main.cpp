// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"
#include "Student.h"
#include "Compare.h"

int main()
{
    /*NumberList m{};
    m.Init();
    m.Add(5);
    m.Add(8);
    m.Add(2);
    m.Add(1);
    m.Add(9);
    m.Print();
    m.Sort();
    m.Print();*/
    Student s1{},s2{};
    s1.setName("Andrei");
    s1.setEnglish(6.4f);
    s1.setHistory(5.f);
    s1.setMath(8.5f);
    s2.setName("Bogdan");
    s2.setEnglish(3.2f);
    s2.setHistory(10.f);
    s2.setMath(9.7f);
    std::cout << s1.getAvgGrade() << " " << s2.getAvgGrade()<<std::endl;
    std::cout << compareNames(s1, s2) << " " << compareEnglish(s1, s2) << " " << compareAvg(s1, s2);

}
