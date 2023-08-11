#include <iostream>
#include "Sort.h"
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{ 5,19,3,7,4 };
    Sort s1(7, 0, 45);
    Sort s2{ {11,6,3,8,12,9,42,5} };
    Sort s3(vec, (int)vec.size());
    Sort s4(4, 27, 8, 53, 3);
    Sort s5("10,40,100,5,70");
    s1.Print();
    s2.Print();
    s2.BubbleSort(1);
    s2.Print();
    cout << s2.GetElementsCount();
    cout << endl;
    cout << s2.GetElementFromIndex(2);
    cout << endl;
    s3.Print();
    s3.InsertSort();
    s3.Print();

}

