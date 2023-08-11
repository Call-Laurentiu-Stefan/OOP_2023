#pragma once
#include <vector>
#include <cstdlib>
#include <cstdarg>
#include <string.h>
#include <iostream>
#include <time.h>

using namespace std;

class Sort

{
    vector<int> vec;

public:

    Sort(int n, int min, int max);
    Sort(vector<int> v);
    Sort(vector<int> v, int n);
    Sort(int n, ...);
    Sort(const char* m);

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};

